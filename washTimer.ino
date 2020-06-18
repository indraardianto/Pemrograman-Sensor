#include <Servo.h>
#define echoPin D4
#define trigPin D5
#define pinServo D3

Servo Myservo;
int pos;
long duration;
int distance;

void setup(){ 
Myservo.attach(pinServo);
pinMode(echoPin,INPUT);
pinMode(trigPin, OUTPUT);
//Serial.begin(9600);

}

//void setup(){ 
//Myservo.attach(3);
//pinMode(echoPin,INPUT);
//pinMode(trigPin,OUTPUT);
//
//}

void loop() {
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
 
digitalWrite(trigPin,HIGH);
delayMicroseconds(10); 

digitalWrite(trigPin,LOW);

duration= pulseIn(echoPin,HIGH);
distance= (duration*0.034/2);
  
  if(distance <= 5){
    for(pos=180; pos>=0; pos--){
      Myservo.write(pos);
      delay(111.1);
    }
    
}
  else{
      Myservo.write(180);
  }
  //delay(200);

}
