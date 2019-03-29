#include <DHT.h>
#define DHTPIN 3
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
int pir= 2;
int ldr=A0;
int ledr= 4;
int mot= 6;
int ledb= 5;
int pirval=0;
int ldrval=0;
void setup() {
  pinMode(pir,INPUT);
  pinMode(ledr,OUTPUT);
  pinMode(ledb,OUTPUT);
  pinMode(mot,OUTPUT);
  pinMode(ldr,INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  int h= dht.readHumidity();
  int t= dht.readTemperature();

  ldrval = analogRead(ldr);
  pirval= digitalRead(pir);

  if (pirval==1){
    if (t>20){
      digitalWrite(mot,HIGH);
      digitalWrite(ledb,HIGH);
    }
    else if (t<=20){
      digitalWrite(mot,LOW);
      digitalWrite(ledb,LOW);
    }
    if (ldrval>50){
      digitalWrite(ledr,LOW);
    }
    else if (ldrval<=50){
      digitalWrite(ledr,HIGH);
    }
    delay(3000);
  }
  if (pirval==0){
    digitalWrite(mot,LOW);
    digitalWrite(ledb,LOW);
    digitalWrite(ledr,LOW);
  }
  Serial.print("temp=");
  Serial.println(t);
  Serial.print("ldrval=");
  Serial.println(ldrval);
  Serial.print("pirval=");
  Serial.println(pirval);
  // put your main code here, to run repeatedly:

}
