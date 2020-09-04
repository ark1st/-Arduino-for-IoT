char data;
int pinnum = 3
void setup() {
    Serial.begin(9600);
    pinMode(pinnum, OUTPUT);
}

void loop() { 
    if(Serial.available()) {
        data = Serial.read();
        //Serial.print("input : %c" , data);
    }
    if (data == '1') {
        Serial.println("LED ON");
        digitalWrite(pinnum, HIGH);
    }
    else if (data == '2')
    {
        Serial.println("LED OFF");
        digitalWrite(pinnum, LOW);
    }
    delay(100);
    
}   