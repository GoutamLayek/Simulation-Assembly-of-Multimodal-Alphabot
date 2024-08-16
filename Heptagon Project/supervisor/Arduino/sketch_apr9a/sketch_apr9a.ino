// // Define pin numbers
// #include <SoftwareSerial.h>

// const int analogPin1 = A2;
// const int analogPin2 = A3;
// const int analogPin3 = A4;
// const int digitalPin1 = 7;
// const int digitalPin2 = 6;
// #define XBEE_RX_PIN 2 // Define the RX pin for XBee
// #define XBEE_TX_PIN 3 // Define the TX pin for XBee

// SoftwareSerial xbee(XBEE_RX_PIN, XBEE_TX_PIN);

// void setup() {
//   // Set analog pins as inputs
//   pinMode(analogPin1, INPUT);
//   pinMode(analogPin2, INPUT);
//   pinMode(analogPin3, INPUT);

//   // Set digital pins as inputs
//   pinMode(digitalPin1, INPUT_PULLUP);
//   pinMode(digitalPin2, INPUT_PULLUP);

//   // Set XBee pins as outputs
//   pinMode(XBEE_RX_PIN, INPUT);
//   pinMode(XBEE_TX_PIN, OUTPUT);
//   // Initialize serial communication for XBee
//   Serial.begin(9600);
//   xbee.begin(9600);
// }

// void loop() {
//   // Read analog inputs
//   int analogValue1 = analogRead(analogPin1);
//   int analogValue2 = analogRead(analogPin2);
//   int analogValue3 = analogRead(analogPin3);

//   // Read digital inputs
//   int digitalValue1 = digitalRead(digitalPin1);
//   int digitalValue2 = digitalRead(digitalPin2);

  
//   // Send data to XBee
//   if(digitalValue1==0)
//   xbee.print('6');
//   else if(digitalValue1==0)
//   xbee.print('7');
//   else if(analogValue1==0)
//   xbee.print('1');
//   else if(analogValue2==0)
//   xbee.print('2');
//   else if(analogValue2==1023)
//   xbee.print('3');  
//   else if(analogValue3==0)
//   xbee.print('4');
//   else if(analogValue3==1023)
//   xbee.print('5');
//   else
//   xbee.print('0');

//   Serial.print(digitalValue1);
//   Serial.print(digitalValue2);
//   Serial.print(analogValue1);
//   Serial.print(analogValue2);
//   Serial.print(analogValue3);
//   Serial.println();
//   xbee.print('A');
// }
#include <SoftwareSerial.h>
#define rxPin 2
#define txPin 3
const int digitalPin1 = 7;
const int digitalPin2 = 6;
const int analogPin1 = A2;
const int analogPin2 = A3;
const int analogPin3 = A4;

SoftwareSerial xbee =  SoftwareSerial(rxPin, txPin);
void setup(){
 Serial.begin(9600);
 pinMode(rxPin, INPUT);
 pinMode(txPin, OUTPUT);

 pinMode(digitalPin1, INPUT_PULLUP);
 pinMode(digitalPin2, INPUT_PULLUP);
  pinMode(analogPin1, INPUT);
  pinMode(analogPin2, INPUT);
  pinMode(analogPin3, INPUT);
 xbee.begin(9600);
}

void loop(){
  int digitalValue1 = digitalRead(digitalPin1);
  int digitalValue2 = digitalRead(digitalPin2);
  int analogValue1 = analogRead(analogPin1);
  int analogValue2 = analogRead(analogPin2);
  int analogValue3 = analogRead(analogPin3);
  
  if(digitalValue1==0)
 {
  xbee.print('A');
  Serial.println('B'); 
 }
 else if(digitalValue2==0)
  {
  xbee.print('B');
  Serial.println('C'); 
 }
  else if(analogValue1==0)
  xbee.print('P');
  else if(analogValue2==0)
  xbee.print('L');
  else if(analogValue2==1023)
  xbee.print('R');  
  else if(analogValue3==0)
  xbee.print('F');
  else if(analogValue3==1023)
  xbee.print('G');
 else
 {
  xbee.print('C');
  Serial.println(analogValue2); 
 }
}
