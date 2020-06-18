boolean gerak;

void setup() {
  
  Serial.begin(9600);
  pinMode(D5, INPUT);
  
}

void loop() {

  gerak = digitalRead(D5);

  if(gerak == 1){

    Serial.println("ada gerakan");
    
   }else{

    Serial.println("tidak ada gerakan");
    
    }
}
