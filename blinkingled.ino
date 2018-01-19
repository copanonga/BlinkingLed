int ledPin = 12;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin , OUTPUT);
}

void loop()
{
  encender();
  delay(1000);
  apagar();
  delay(1000);
}

void encender() {
  Serial.println("Encender...");
  digitalWrite(ledPin, HIGH);
}

void apagar(){
  Serial.println("Apagar...");
  digitalWrite(ledPin, LOW);  
}
