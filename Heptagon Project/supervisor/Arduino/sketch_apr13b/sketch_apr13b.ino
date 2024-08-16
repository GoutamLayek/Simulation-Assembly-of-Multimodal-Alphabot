// #include <SoftwareSerial.h>
#include <XBee.h>

// XBee xbee = XBee();
// SoftwareSerial soft=(0,1);
// ZBRxResponse rx = ZBRxResponse();

// void setup() {
//   // put your setup code here, to run once:
  
//   soft.begin(9600);
//   Serial.begin(9600);
//   xbee.setSerial(soft);
// }

// void loop() {
//   // put your main code here, to run repeatedly:

// }
#include <SoftwareSerial.h>

#define RX_PIN 0 // Define the pin for receiving data from the Zigbee module
#define TX_PIN 1 // Define the pin for transmitting data to the Zigbee module

XBee xbee = XBee();
SoftwareSerial soft(0,1);
Rx16Response rx16 = Rx16Response();
ZBRxResponse rx = ZBRxResponse(); // Create a SoftwareSerial object
XBeeAddress64 addr64 = XBeeAddress64(0x0013a200,0x42040b8b);

void setup() {
  #define RX_PIN 0 // Define the pin for receiving data from the Zigbee module
#define TX_PIN 1 // Define the pin for transmitting data to the Zigbee module

  soft.begin(9600);
  Serial.begin(9600);
  xbee.setSerial(soft);// Start the communication with the Zigbee module
}

void loop() {
  xbee.readPacket();
  if (xbee.getResponse().isAvailable()) {
    if (xbee.getResponse().getApiId() == ZB_RX_RESPONSE) {
       xbee.getResponse().getZBRxResponse(rx);
    }// Check if data is available from Zigbee module
    for (int i = 0; i < rx.getDataLength(); i++) {
          Serial.print(rx.getData()[i]);
    } // Print the received character to the serial monitor
    Serial.println();
  }
  else
  Serial.println("hi");
  delay(500);
}