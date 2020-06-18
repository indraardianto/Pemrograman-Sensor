#include <Servo.h>

#define pinServo D8
//membuat instance servo untuk pengontrollan servo
Servo servoKu;

//variabel untuk menyimpan posisi servo
int posisi = 0;

void setup() {
servoKu.attach(pinServo);

}

void loop() {
  servoKu.write(posisi);
}
