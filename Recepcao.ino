void recebe() {

  if (irrecv.decode(&results))
  {
    Serial.print("Valor lido : ");
    Serial.println(results.value, HEX);
    Serial.print("\n");
    armazenavalor = (results.value);

    if (armazenavalor == 0x2FD01FE or armazenavalor == 0x8070265C)//OK
    {
      digitalWrite(ledx, !digitalRead(ledx));
      digitalWrite(led, !digitalRead(led));
      Serial.flush();
      Serial.println("Comando recebido : OK (Inverter) \n");

    }
    else if (armazenavalor == 0x80702658 or armazenavalor == 0x2FD41BE) //Cima
    {
      digitalWrite(ledx, HIGH);
      Serial.flush();
      Serial.println("Comando recebido : CIMA (Ligar led externo) \n");
    }
    else if (armazenavalor == 0x8070A659 or armazenavalor == 0x2FDC13E) //Baixo
    {
      digitalWrite(led, HIGH);
      Serial.flush();
      Serial.println("Comando recebido : BAIXO (Ligar led embutido) \n");
    }
    else if (armazenavalor == 0x2FD9867 or armazenavalor == 0x8070265B ) //Direita
    {
      digitalWrite(ledx, LOW);
      Serial.flush();
      Serial.println("Comando recebido : DIREITA (Desligar led externo) \n");
    }
    else if (armazenavalor == 0x2FDB847 or armazenavalor == 0x8070265A) //Esquerda
    {
      digitalWrite(led, LOW);
      Serial.flush();
      Serial.print("Comando recebido : ESQUERDA (Desligar led embutido) \n");
    }
    irrecv.resume(); //Le o próximo valor
  }

}
