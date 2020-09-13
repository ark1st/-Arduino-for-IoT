#include<DHT.h>
#include<SoftwareSerial.h>

#define DHTTYPE DHT22
#define DHTPIN 5 // 온도센서

int lightSensor = A0; // 조도센서

DHT dht(DHTPIN, DHTTYPE); // 온도 DHT 객체
SoftwareSerial BT(2,3); // 블루투스 열기
char state = 'c'; // 블루투스 컨트롤 변수
int sensor[] = {0,0,0}; //상태 배열
bool ledon = false;

void setup() {
  for (int i = 10; i<=12; i++) {
    pinMode(i, OUTPUT);
  } // (int i = 10; i<=12; i++) => LED 초기화
  //Serial.begin(9600); // 시리얼 통신 시작
  BT.begin(9600); //블루투스 통신 시작
  pinMode (13, OUTPUT);
  dht.begin(); // 온도 DHT 객체
  
}

void loop() { 
  //########BLUE###########

  if (BT.available()) { // 블루투스 켜기
    state = (int)BT.read(); // 블루투스 신호를 받아서 state 변수에 저장
    //Serial.write(state); // 시리얼에 블루투스 신호 출력 (확인용)
    digitalWrite (13, HIGH); // 블루투스 통신 성공 시 13번 LED 출력
  }

  switch (state) //블루투스 버튼 동작 구현
  {
  case 'a': //모든 전자기기 끄기 버튼
    for (int i=10; i<=12; i++){
      digitalWrite (i, LOW);
    }
    for (int i=0; i<=2; i++) {
      sensor[i] = 0;
    }
    ledon = 0;
    break;
  case 'b': // 모든 전자기기 켜기 버튼
    for (int i=10; i<=12; i++){
      digitalWrite (i, HIGH);
    }
    for (int i=0; i<=2; i++) {
      sensor[i] = 0;
    }
    ledon = 1;
    break;
  case 'c': // 모든 전자기기 자동모드로
  if (ledon == 1) {
    for (int i=10; i<=12; i++){
      digitalWrite (i, LOW);
    }
    ledon = 0;
  }
    for (int i=0; i<=2; i++) {
      sensor[i] = 1;
    }
    LightSensor(lightSensor, 12); //광센서 함수
    DHTSensor(DHTPIN, 10, 11); //온도 습도센서 함수
  default:
    break;
  }
  
}

void LightSensor(int pinnum, int LED) {
  
  int cdsValue = analogRead(pinnum); //아날로그 입력값 받기
  BT.println(cdsValue); //터미널 출력 확인
  if (sensor[0] == 1){
    if (cdsValue < 960) {
     digitalWrite (LED, HIGH);
    }
    else {
      digitalWrite (LED, LOW);
    }
  }
  
  delay(200);
}

void DHTSensor(int pinnum, int LED1, int LED2) {
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();
  if (sensor[1] == 1) {
    if (temp >= 20) { //온도가 20도 이상이면 에어컨 작동
      digitalWrite (LED1, HIGH);
    }
    else {
      digitalWrite (LED1, LOW);
    } 
  }
  if (sensor[2] == 1) {
    if (hum >= 70) { // 습도가 70% 이상이면 제습기 작동
    digitalWrite (LED2, HIGH);
     }
    else {
    digitalWrite (LED2, LOW);
    }
  }
  //BT.println((int)temp);
  //BT.println((int)hum);

  delay(200);
}

