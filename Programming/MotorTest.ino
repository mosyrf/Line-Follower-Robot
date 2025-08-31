const byte IN1 = 6;
const byte IN2 = 5;
const byte IN3 = 10;
const byte IN4 = 11;
const byte ENA = 9;
const byte ENB = 3;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
}

void loop() {
  analogWrite(ENA, 255);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  delay(2000);

  analogWrite(ENA, 255);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delay(2000);

  analogWrite(ENB, 255);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(2000);

  analogWrite(ENB, 255);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(2000);

  analogWrite(ENA, 100);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delay(2000);

  analogWrite(ENB, 255);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(2000);

  analogWrite(ENA, 255);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  delay(2000);

  analogWrite(ENB, 100);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(2000);
}
