void controle() {
  if (Serial.available()) {
    while (Serial.available()) {
      l = Serial.read();
      delay(10);
      lf += l;
    }
    if (lf == "13") {
      analogWrite(A5, !analogRead(A5));

      if (analogRead(A5) == 0) {
        Serial.print("A5 DESLIGADO");
      }
      else {
        Serial.print("A5 LIGADO");
      }

    } if (lf == "14") {

      analogWrite(A4, !analogRead(A4));

      if (analogRead(A4) == 0) {
        Serial.print("A4 DESLIGADO");
      }
      else {
        Serial.print("A4 LIGADO");
      }

    } if (lf == "12") {

      digitalWrite(12, !digitalRead(12));

      if (digitalRead(12) == 0) {
        Serial.print("12 DESLIGADO");
      }
      else {
        Serial.print("12 LIGADO");
      }

    } if (lf == "11") {

      digitalWrite(11, !digitalRead(11));

      if (digitalRead(11) == 0) {
        Serial.print("11 DESLIGADO");
      }
      else {
        Serial.print("11 LIGADO");
      }

    }
    if (lf == "10") {

      digitalWrite(10, !digitalRead(10));

      if (digitalRead(10) == 0) {
        Serial.print("10 DESLIGADO");
      }
      else {
        Serial.print("10 LIGADO");
      }

    }
    if (lf == "9") {

      digitalWrite(9, !digitalRead(9));

      if (digitalRead(9) == 0) {
        Serial.print("9 DESLIGADO");
      }
      else {
        Serial.print("9 LIGADO");
      }

    }
    if (lf == "8") {

      digitalWrite(8, !digitalRead(8));

      if (digitalRead(8) == 0) {
        Serial.print("8 DESLIGADO");
      }
      else {
        Serial.print("8 LIGADO");
      }

    }
    if (lf == "7") {

      digitalWrite(7, !digitalRead(7));

      if (digitalRead(7) == 0) {
        Serial.print("7 DESLIGADO");
      }
      else {
        Serial.print("7 LIGADO");
      }

    }
    if (lf == "6") {

      digitalWrite(6, !digitalRead(6));

      if (digitalRead(6) == 0) {
        Serial.print("6 DESLIGADO");
      }
      else {
        Serial.print("6 LIGADO");
      }

    }
    if (lf == "5") {

      digitalWrite(5, !digitalRead(5));

      if (digitalRead(5) == 0) {
        Serial.print("5 DESLIGADO");
      }
      else {
        Serial.print("5 LIGADO");
      }

    }
    if (lf == "4") {

      digitalWrite(4, !digitalRead(4));

      if (digitalRead(4) == 0) {
        Serial.print("4 DESLIGADO");
      }
      else {
        Serial.print("4 LIGADO");
      }

    }
    if (lf == "2") {

      digitalWrite(2, !digitalRead(2));

      if (digitalRead(2) == 0) {
        Serial.print("2 DESLIGADO");
      }
      else {
        Serial.print("2 LIGADO");
      }

    }
    if (lf == "3") {

      digitalWrite(3, !digitalRead(3));

      if (digitalRead(3) == 0) {
        Serial.print("3 DESLIGADO");
      }
      else {
        Serial.print("3 LIGADO");
      }

    }
    else if (lf == "0") {

      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
      digitalWrite(A4, LOW);
      digitalWrite(A5, LOW);

    }
    Serial.println("");
  }
  
}
