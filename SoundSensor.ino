int Led = 13;
int buttonpin = 3;
int  val = 0;

void setup() {
  pinMode(buttonpin, INPUT);
  pinMode(Led, OUTPUT);
}

void loop() {
  val = digitalRead(buttonpin);

  if(val == 1){
    digitalWrite(Led, HIGH);
    }else{
      digitalWrite(Led, LOW);
      }
}
