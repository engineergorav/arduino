int led=13;
int button=2;
int buttonstate=0;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);

}

void loop() {
  buttonstate=digitalRead(button);
  if(buttonstate==HIGH){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
  delay(1000);
  // put your main code here, to run repeatedly:

}
