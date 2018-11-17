#include <SoftwareSerial.h> 
int blueTx=2;   
int blueRx=3;   
SoftwareSerial mySerial(blueTx, blueRx); 
String myString="";

void setup() {
  Serial.begin(9600);   
  mySerial.begin(9600); 
  pinMode(13, OUTPUT);}
void loop() {
  while(mySerial.available()) { 
    char myChar = (char)mySerial.read();  //mySerial int형식의 값을 char형식으로 변환
    myString+=myChar;   //수신되는 문자열을 myString에 모두 붙임 (1바이트씩 전송되는 것을 모두 붙임)
    delay(5);           //수신 문자열 끊김 방지  
    } 
  if(!myString.equals("")) {
    Serial.println("input value: "+myString); //시리얼모니터에 myString값 출력
    if(myString=="dot") {
      digitalWrite(13, HIGH); 
      delay(100); 
      digitalWrite(13, LOW);
    } 
    if(myString=="dash") {
      digitalWrite(13, HIGH); 
      delay(300); 
      digitalWrite(13, LOW);
    } 
  myString="";
  }
}


