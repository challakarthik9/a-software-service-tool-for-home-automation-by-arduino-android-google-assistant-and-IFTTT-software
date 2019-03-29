int ldr= A0;
int led= 8;

void setup() {
  Serial.begin(9600);
  pinMode(ldr,INPUT);
  pinMode(led,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int ldrVal= analogRead(ldr);
  Serial.print(ldrVal);
  if (ldrVal>30){
    digitalWrite(led,LOW);
  }
  if (ldrVal<30){
    digitalWrite(led,HIGH);
  }
  
  // put your main code here, to run repeatedly:

}
