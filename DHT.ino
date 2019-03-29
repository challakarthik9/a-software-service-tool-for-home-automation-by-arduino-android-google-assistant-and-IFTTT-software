#include <DHT.h>
#define DHTPIN 4
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
int led= 5;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int h= dht.readHumidity();
  int t= dht.readTemperature();
  if (t>20){
    digitalWrite(led,HIGH);
  }
  else {
    digitalWrite(led,LOW);
  }
  Serial.print("temperature=");
  Serial.println(t);
  Serial.print("humidity=");
  Serial.println(h);
  delay(1000);

  // put your main code here, to run repeatedly:

}
