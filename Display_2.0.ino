void setup() {

  Serial.begin(9600);
  for (int c = 2; c <= 13; c++) {
    pinMode(c, OUTPUT);
  }
}

void loop() {

  for (int c = 2; c <= 14; c++) {

    if (c == 13) {

      analogWrite(A5, !analogRead(A5));

    } else if (c == 14) {

      analogWrite(A4, !analogRead(A4));

    } else if (c > 0 and c < 13) {

      digitalWrite(c, !digitalRead(c));

    }
    delay(2000);
    
    Serial.print("Display ");
    Serial.print(c);
    Serial.print(": ");
    Serial.print(digitalRead(c));
    Serial.println("");
  }
}
