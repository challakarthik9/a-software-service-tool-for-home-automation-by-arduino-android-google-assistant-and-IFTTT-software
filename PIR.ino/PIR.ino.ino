int pir= 2;
int led= 6;
int val= 0;
void setup() {
  pinMode(pir,INPUT);
  pinMode(led,OUTPUT); 
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  val= digitalRead(pir);
  delayMicroseconds(100);
  Serial.print(val);
  if (val==1){
    digitalWrite(led,HIGH);
  }
  if (val==0){
    digitalWrite(led,LOW);
  }
  // put your main code here, to run repeatedly:

}
