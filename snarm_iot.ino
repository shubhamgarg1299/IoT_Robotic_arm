

//SMART IoT BASED ROBOTIC ARM
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

Servo servo;
Servo servo1;
Servo servo2;
Servo servo3;

char auth[] = "d0cc30677d084cdda5071f7d8abb37c1";
char ssid[] = "Lenovo K6 Note";
char pass[] = "abcdefghij";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);

  servo.attach(5);
  servo1.attach(4);
  servo2.attach(0);
  servo3.attach(2);
  
 }
  
void loop()
{
  
  Blynk.run();
  
}
BLYNK_WRITE(V0)
{
   servo.write(param.asInt());
}

BLYNK_WRITE(V1)//gripper
{
   servo1.write(param.asInt());
}
BLYNK_WRITE(V2)
{
   servo2.write(param.asInt());
}
BLYNK_WRITE(V3)
{
   servo3.write(param.asInt());
}
