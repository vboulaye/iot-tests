#include <Arduino.h>

#include <RCSwitch.h>

#include <output.h>

RCSwitch mySwitch = RCSwitch();

void setup() {
  Serial.begin(9600);
  mySwitch.enableReceive(0);  // Receiver on interrupt 0 => that is pin #2
}

void loop() {
//  if (mySwitch.available()) {
    output(mySwitch.getReceivedValue(), 
        mySwitch.getReceivedBitlength(),
        mySwitch.getReceivedDelay(), 
        mySwitch.getReceivedRawdata(),
        mySwitch.getReceivedProtocol()
        );
    for(int i=0;i++;i<RCSWITCH_MAX_CHANGES) {
      mySwitch.getReceivedRawdata()[i] =0;
    }
    mySwitch.resetAvailable();
    delay(100);

  //}
}