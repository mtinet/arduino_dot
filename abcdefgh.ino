#include <SoftwareSerial.h> 
int blueTx=2;   
int blueRx=3;   
SoftwareSerial mySerial(blueTx, blueRx); 
String myString="";

void setup() {
  Serial.begin(9600);   
  mySerial.begin(9600); 
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  while(mySerial.available()) { 
    char myChar = (char)mySerial.read();  //mySerial int형식의 값을 char형식으로 변환
    myString+=myChar;   //수신되는 문자열을 myString에 모두 붙임 (1바이트씩 전송되는 것을 모두 붙임)
    delay(5);           //수신 문자열 끊김 방지  
    } 
  if(!myString.equals("")) {
    Serial.println("input value: "+myString); //시리얼모니터에 myString값 출력
    if(myString=="a") {
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW); 
      delay(100); 
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
    } 
    if(myString=="b") {
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW); 
      delay(100); 
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
    } 
    if(myString=="c") {
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH); 
      delay(100); 
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
    } 
    if(myString=="d") {
      digitalWrite(13, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW); 
      delay(100); 
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
    } 
    if(myString=="e") {
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH); 
      delay(100); 
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
    }
    if(myString=="f") {
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH); 
      delay(100); 
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
    }
    if(myString=="g") {
      digitalWrite(13, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH); 
      delay(100); 
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
    }
    if(myString=="h") {
      digitalWrite(13, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH); 
      delay(100); 
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW); 
      delay(100); 
      digitalWrite(13, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH); 
      delay(100); 
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
    }
  myString="";
  }
}


