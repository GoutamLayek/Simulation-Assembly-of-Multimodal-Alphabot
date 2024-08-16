
#include "alphabot_drivers.h"
#include "line_follower.h"
#include <SoftwareSerial.h>
#define rxPin 4
#define txPin 13
#define NUM_SENSORS 5
int sensorValues[NUM_SENSORS];
Line_follower__main_out _res;
Line_follower__main_mem _mem;

SoftwareSerial xbee =  SoftwareSerial(rxPin, txPin);

const int irsen0=8;
const int irsen1=7;
unsigned long previoustime=millis();

void setup(){
  pinMode(rxPin, INPUT);
  pinMode(txPin, OUTPUT);
  init_devices();
  //forward();
  xbee.begin(9600);
  Serial.begin(9600);
  Serial.println("Starting XBee Comunication");
}


void loop(){

  AnalogRead(sensorValues);
  int irsen0_reading=digitalRead(irsen0);
  int irsen1_reading=digitalRead(irsen1);
  unsigned long currenttime=millis();
  bool sec=false;
  if(currenttime-previoustime>=500)
  {
    sec=true;
    previoustime=currenttime;
  }
  char someChar;
  if(xbee.available())
  {
    someChar = xbee.read();
    Serial.println(someChar);
  }
  int joystickinput;
  if(someChar=='P')
  joystickinput=1;
  else if(someChar=='L')
  joystickinput=2;
  else if(someChar=='R')
  joystickinput=3;
  else if(someChar=='F')
  joystickinput=4;
  else if(someChar=='G')
  joystickinput=5;
  else if(someChar=='A')
  joystickinput=6;
  else if(someChar=='B')
  joystickinput=7;
  else
  joystickinput=0;
  Line_follower__main_step(sensorValues[0], sensorValues[1], sensorValues[2], sensorValues[3], sensorValues[4], irsen0_reading, irsen1_reading, joystickinput, sec, &_res, &_mem);
  Serial.print(_res.inputgiven);
    if(_res.dir == 3){
      left();
    }
    else if(_res.dir == 4){
      right();
    }
    else if(_res.dir == 5){
      backward();
    }
    else if(_res.dir == 6){
      backward();
    }
    else
    forward();
    SetSpeed(_res.v_l,_res.v_r);
    
 delay(20);
 //Serial.println(rec);
}
// #include "alphabot_drivers.h"
// #include "line_follower.h"
// #include <SoftwareSerial.h>

// #define NUM_SENSORS 5
// int sensorValues[NUM_SENSORS];
// Line_follower__main_out _res;
// Line_follower__main_mem _mem;

// const int irsen0=8;
// const int irsen1=7;
// unsigned long previoustime=millis();
// const int xbeeRxPin = 0;
// const int xbeeTxPin = 1;

// int irsen0_reading;
// int irsen1_reading;
// byte xbeevalue;
// #define XBEE_RX_PIN 0 // Define the RX pin for XBee
// #define XBEE_TX_PIN 1
// SoftwareSerial xbeeSerial(XBEE_RX_PIN, XBEE_TX_PIN);

// void setup()
// {
//   init_devices();
//   forward();
//   pinMode(XBEE_RX_PIN, INPUT);
//   pinMode(XBEE_TX_PIN, OUTPUT);
//   xbeeSerial.begin(9600);
//   Serial.begin(115200);
// }

// void loop()
// {
//   AnalogRead(sensorValues);
//   irsen0_reading=digitalRead(irsen0);
//   irsen1_reading=digitalRead(irsen1);
//   xbeevalue=xbeeSerial.read();
//   unsigned long currenttime=millis();
//   bool sec=false;
//   int j_input=0;
//   if(currenttime-previoustime>=500)
//   {
//     sec=true;
//     previoustime=currenttime;
//   }
//   Line_follower__main_step(sensorValues[0], sensorValues[1], sensorValues[2], sensorValues[3], sensorValues[4], irsen0_reading, irsen1_reading, j_input, sec, &_res, &_mem);
//   Serial.print(_res.v_l);
//   Serial.print(" ");
//   Serial.print(_res.v_r);
//   Serial.print(" ");
//   //Serial.println(_res.pidvalue);

//   Serial.print(xbeevalue);


//   Serial.println(" ");

//   if(xbeevalue=='1'){
//     stop();
//   }
//   else if(_res.dir == 3){
//     left();
//   }
//   else if(_res.dir == 4){
//     right();
//   }
//   else if(_res.dir == 5){
//     backward();
//   }
//   else if(_res.dir == 6){
//     backward();
//   }
//   else
//     forward();
//   SetSpeed(_res.v_l,_res.v_r);
//       Serial.print(sensorValues[0]);
//   Serial.print(" ");
//   Serial.print(sensorValues[1]);
//   Serial.print(" ");
//   Serial.print(sensorValues[2]);
//   Serial.print(" ");
//   Serial.print(sensorValues[3]);
//   Serial.print(" ");
//   Serial.print(sensorValues[4]);
//   Serial.print(" ");
//   Serial.println(" ");

//   delay(20);
// }