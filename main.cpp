  int speedReading = 0;
  int adjustedReading = 0;
  int potReading = 0;


  void setup(){
    pinMode(A0, INPUT);
    Serial.begin (9600);
    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(2, OUTPUT);
    }
  void turnAllOff(){
   	  digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(11,LOW);
      digitalWrite(12,LOW);
      digitalWrite(13,LOW);
    }
void loop(){
    potReading = analogRead(A0);
    Serial.println(potReading);
    delay(50);
    adjustedReading = speedReading * 4;
   if (potReading < 256){
      turnAllOff();
              digitalWrite(13, HIGH);
              digitalWrite(2,HIGH);
        delay(adjustedReading); 
    }else{
    if (potReading < 512){
      turnAllOff();
              digitalWrite(12, HIGH);
              digitalWrite(3,HIGH); 
              digitalWrite(4, HIGH);
        delay(adjustedReading);
    }else{
    if (potReading < 768){
      turnAllOff();
              digitalWrite(11,HIGH); 
              digitalWrite(4,HIGH); 
        delay(adjustedReading);                  
     }else{
    if (potReading < 1023){
      turnAllOff();
              digitalWrite(12,HIGH); 
              digitalWrite(3, HIGH);
              digitalWrite(13, HIGH);

         delay(adjustedReading);
    }
   }
  }
 }
}
