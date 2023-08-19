//Dhiego Manrique y Lesley Camargo

int led = 11;

void setup() {
  pinMode(11, OUTPUT);
  

}

void loop() {
    digitalWrite(led, HIGH);
    delay(15000);
    digitalWrite(led, LOW);
    delay(10000);
    digitalWrite(led, HIGH);
    delay(15000);
    digitalWrite(led, LOW);
    delay(10000);
  


}
