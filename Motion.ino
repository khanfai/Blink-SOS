void setup() {
  // put your setup code here, to run once:
pinMode (LED_BUILTIN,OUTPUT);
Serial.begin(9600);
pinMode(6, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if ((digitalRead(6) == HIGH && digitalRead(5) == HIGH))
  {
    Serial.println("Active");
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
      

  }
  else {
    Serial.println("Inactive");
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
                    
  }
  delay(1000);
}
