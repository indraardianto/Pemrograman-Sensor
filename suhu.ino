#include <OneWire.h>
#include <DallasTemperature.h>
#define oneWireBus D5


//membuat instance oneWire untuk berkomunikasi dengan perangkat oneWire
OneWire oneWire(oneWireBus);

//memberi reference oneWire kepada sensor temperature
DallasTemperature sensor(&oneWire);

void setup() {
  // memulai serial monitor
  Serial.begin(9600);

  //memulai sensor
  sensor.begin();

  //pinMode(D2, OUTPUT);
}

void loop() {

  Serial.print("Request pembacaan suhu..");
  sensor.requestTemperatures();
  Serial.println("Selesai");

  float tempC = sensor.getTempCByIndex(0); 
  Serial.println(tempC);
  Serial.println("C");
  delay(1000);
  
//  if(tempC >= 30){
//    digitalWrite(D2, HIGH);
//    }else{
//      digitalWrite(D2, LOW);
//      }
//  delay(1000);
}
