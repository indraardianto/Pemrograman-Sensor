#define echoPin D2
#define trigPin D1

long durasi;
int jarak;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.begin(9600);
}

void loop() {

  // reset triger
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(2);

  // pin triger sebagai HIGH selama 10 mikro detik
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // membaca echoPin, mengembalikan waktu gelombang suara dalam mikro detik
  durasi = pulseIn(echoPin, HIGH);
  jarak = durasi*0.034/2;

  Serial.print("jarak : ");
  Serial.println(jarak);
//
//  if(jarak <= 30){
//
//    Serial.println("Objek sudah dekat");
//    
//    }else{
//      
//      Serial.println("Jarak Aman");
//      
//      }
}
