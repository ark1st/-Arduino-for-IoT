int pinnum = 3;
void setup() {
    
    pinMode(pinnum, OUTPUT);
}

void loop() { 
    digitalWrite(pinnum, HIGH);
    delay(1000);
    digitalWrite(pinnum, LOW);
    delay(1000);
}   