int ENA = 3;
int ENB = 4;
int IN1 = 5;
int IN2 = 9;
int IN3 = 10;
int IN4 = 11;

int kecepatan = 255;

const byte sens1 = A0;
const byte sens2 = A1;
const byte sens3 = A2;
const byte sens4 = A3;
const byte sens5 = A4;
const byte sens6 = A5;
const byte sens7 = A6;
const byte sens8 = A7;

int nSens1, nSens2, nSens3, nSens4, nSens5, nSens6, nSens7, nSens8;

void setup() {
  Serial.begin(9600);

  pinMode(sens1, INPUT);
  pinMode(sens2, INPUT);
  pinMode(sens3, INPUT);
  pinMode(sens4, INPUT);
  pinMode(sens5, INPUT);
  pinMode(sens6, INPUT);
  pinMode(sens7, INPUT);
  pinMode(sens8, INPUT);

  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  bacaSensor();
  Serial.print("BACA SENSOR: ");
  Serial.print(nSens1);
  Serial.print(nSens2);
  Serial.print(nSens3);
  Serial.print(nSens4);
  Serial.print(nSens5);
  Serial.print(nSens6);
  Serial.print(nSens7);
  Serial.print(nSens8);
  Serial.println("");
  gerak();
}

void bacaSensor() {
  if (digitalRead(sens1) == HIGH) {  //BACA SENSOR 1
    nSens1 = 1;
  } else {
    nSens1 = 0;
  }

  if (digitalRead(sens2) == HIGH) {  //BACA SENSOR 2
    nSens2 = 1;
  } else {
    nSens2 = 0;
  }

  if (digitalRead(sens3) == HIGH) {  //BACA SENSOR 3
    nSens3 = 1;
  } else {
    nSens3 = 0;
  }

  if (digitalRead(sens4) == HIGH) {  //BACA SENSOR 4
    nSens4 = 1;
  } else {
    nSens4 = 0;
  }

  if (digitalRead(sens5) == HIGH) {  //BACA SENSOR 5
    nSens5 = 1;
  } else {
    nSens5 = 0;
  }

  if (digitalRead(sens6) == HIGH) {  //BACA SENSOR 6
    nSens6 = 1;
  } else {
    nSens6 = 0;
  }

  if (digitalRead(sens7) == HIGH) {  //BACA SENSOR 7
    nSens7 = 1;
  } else {
    nSens7 = 0;
  }

  if (digitalRead(sens8) == HIGH) {  //BACA SENSOR 8
    nSens8 = 1;
  } else {
    nSens8 = 0;
  }
}


void gerak() {
  bacaSensor();
  //maju
  if (nSens1 == 0 && nSens2 == 0 && nSens3 == 0 && nSens4 == 1 && nSens5 == 1 && nSens6 == 0 && nSens7 == 0 && nSens8 == 0) {
    maju();
  }

  else if (nSens1 == 0 && nSens2 == 0 && nSens3 == 1 && nSens4 == 1 && nSens5 == 1 && nSens6 == 1 && nSens7 == 0 && nSens8 == 0) {
    maju();
  }

  else if (nSens1 == 0 && nSens2 == 0 && nSens3 == 0 && nSens4 == 1 && nSens5 == 1 && nSens6 == 1 && nSens7 == 0 && nSens8 == 0) {
    maju();
  }

  else if (nSens1 == 0 && nSens2 == 0 && nSens3 == 1 && nSens4 == 1 && nSens5 == 1 && nSens6 == 0 && nSens7 == 0 && nSens8 == 0) {
    maju();
  }
  //====================================================================================================================================

  //kiri
  else if (nSens1 == 1 && nSens2 == 0 && nSens3 == 0 && nSens4 == 0 && nSens5 == 0 && nSens6 == 0 && nSens7 == 0 && nSens8 == 0) {
    belok_kiri();
  }

  else if (nSens1 == 1 && nSens2 == 1 && nSens3 == 0 && nSens4 == 0 && nSens5 == 0 && nSens6 == 0 && nSens7 == 0 && nSens8 == 0) {
    belok_kiri();
  }

  else if (nSens1 == 1 && nSens2 == 1 && nSens3 == 1 && nSens4 == 0 && nSens5 == 0 && nSens6 == 0 && nSens7 == 0 && nSens8 == 0) {
    belok_kiri();
  }

  else if (nSens1 == 0 && nSens2 == 1 && nSens3 == 1 && nSens4 == 0 && nSens5 == 0 && nSens6 == 0 && nSens7 == 0 && nSens8 == 0) {
    belok_kiri();
  }

  else if (nSens1 == 0 && nSens2 == 0 && nSens3 == 1 && nSens4 == 0 && nSens5 == 0 && nSens6 == 0 && nSens7 == 0 && nSens8 == 0) {
    belok_kiri();
  }

  //======================================================================================================================================

  //kanan
  else if (nSens1 == 0 && nSens2 == 0 && nSens3 == 0 && nSens4 == 0 && nSens5 == 0 && nSens6 == 0 && nSens7 == 0 && nSens8 == 1) {
    belok_kanan();
  }

  else if (nSens1 == 0 && nSens2 == 0 && nSens3 == 0 && nSens4 == 0 && nSens5 == 0 && nSens6 == 0 && nSens7 == 1 && nSens8 == 1) {
    belok_kanan();
  }

  else if (nSens1 == 0 && nSens2 == 0 && nSens3 == 0 && nSens4 == 0 && nSens5 == 0 && nSens6 == 1 && nSens7 == 1 && nSens8 == 1) {
    belok_kanan();
  }

  else if (nSens1 == 0 && nSens2 == 0 && nSens3 == 0 && nSens4 == 0 && nSens5 == 0 && nSens6 == 1 && nSens7 == 0 && nSens8 == 0) {
    belok_kanan();
  }

  else if (nSens1 == 0 && nSens2 == 0 && nSens3 == 0 && nSens4 == 0 && nSens5 == 0 && nSens6 == 1 && nSens7 == 1 && nSens8 == 0) {
    belok_kanan();
  }

  //====================================================================================================================================

  else {
    stop();
  }
}

void maju() {
  analogWrite(ENA, kecepatan);
  analogWrite(ENB, kecepatan);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void belok_kanan() {
  analogWrite(ENA, kecepatan / 2);  // Kurangi kecepatan motor kiri
  analogWrite(ENB, kecepatan);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void belok_kiri() {
  analogWrite(ENA, kecepatan);
  analogWrite(ENB, kecepatan / 2);  // Kurangi kecepatan motor kanan
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}


void stop() {
  analogWrite(ENA, kecepatan);
  analogWrite(ENB, kecepatan);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
}
