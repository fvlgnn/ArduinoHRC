/**
 * Code controller
 * @author @fvlgnn <fvlgnn@gmail.com>
 * @date 1st Jul, 2014
*/
 
#include <SPI.h>
#include <Ethernet.h>
#include <ArduinoHRC.h>

ArduinoHRC ahrc({:ARDID:}, "{:ARDKEY:}");

byte mac[] = { 0xDE,0xAD,0xBE,0xEF,0xFE,0xED };
byte ip[] = {192,168,1,234};

void setup(){
  Serial.begin(9600);
  Ethernet.begin(mac);
  ahrc.setupAHRC();
}

void loop(){
  ahrc.loopAHRC();
}
