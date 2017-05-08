/***************************************************
Simple example of reading the MCP3008 analog input channels and printing
them all out.

Author: Carter Nelson
License: Public Domain
****************************************************/

#include <Adafruit_MCP3008.h>

// Hardware SPI
// Arduino UNO, ESP8266
//Adafruit_MCP3008 adc();
// Feather 32u4 
Adafruit_MCP3008 adc(5);

// Software SPI (sck, mosi, miso, cs);
//Adafruit_MCP3008 adc(14, 13, 12, 15);

int count = 0;

void setup() {
  Serial.begin(9600);

  Serial.println("MCP3008 simple test.");
}

void loop() {
  for (int chan=0; chan<8; chan++) {
    Serial.print(adc.readADC(chan)); Serial.print("\t");
  }

  Serial.print("["); Serial.print(count); Serial.println("]");
  count++;
  
  delay(1000);
}
