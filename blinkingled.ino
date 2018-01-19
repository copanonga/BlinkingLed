int ledPin = 12;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin , OUTPUT);
}

void loop()
{
  start();
  delay(1000);
  stop();
  delay(1000);
}

void start() {
  Serial.println("Start...");
  digitalWrite(ledPin, HIGH);
}

void stop(){
  Serial.println("Stop...");
  digitalWrite(ledPin, LOW);  
}
