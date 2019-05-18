#include <uCamII.h>
//#include <USBSerial.h>

UCAMII camera;
 short x = 0;
  int bytes;

void setup() { 
  Serial1.begin(57600);
  Serial3.begin(57600);
  Serial1.println("trying ..");  
  
  pinMode(PC13, OUTPUT);
  

  
}

void loop() {
  // put your main code here, to run repeatedly:

  
  Serial.println("trying ..");

  // wait for a second
  digitalWrite(PC13, LOW);    // turn the LED off by making the voltage LOW
  delay(500);
  digitalWrite(PC13, HIGH);   // turn the LED on (HIGH is the voltage level)
  
  
  
  


  if (camera.init()) {

  digitalWrite(PC13, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);
  digitalWrite(PC13, HIGH);   // turn the LED on (HIGH is the voltage level)
    
    camera.takePicture();
    Serial1.print("Image size: ");
    Serial1.println(camera.imageSize, DEC);
    Serial1.print("number of packages: ");
    Serial1.println(camera.numberOfPackages(), DEC);

    while ( bytes = camera.getData() ) {
      digitalWrite(PC13, LOW);    // turn the LED off by making the voltage LOW
    delay(100);
    digitalWrite(PC13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);

      for (x = 0; x < bytes; x++) {    
        
        Serial1.print("0x");
        Serial1.print(camera.imgBuffer[x], HEX);
        Serial1.print(" ");
      }
      Serial1.println("");
    }
    Serial1.println("done downloading");

  }

  Serial1.println("Hello World!");
  delay(1000);

}
