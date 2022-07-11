//-----------Defines----------
#define b1 30
#define b2 31
#define b3 32
#define b4 33
#define b5 34
#define b6 35

#define b7 36
#define b8 37
#define b9 38
#define b10 39
#define b11 40
#define b12 41

#define laser1 A0
#define laser2 A1
#define laser3 A2
#define laser4 A3

String vb0;
String vb1;
String vb2;
String vb3;
String vb4;
String vb5;
String vb6;
String vb7;
String vb8;
String vb9;
String vb10;
String vb11;
String vb12;

String la1;
String la2;
String la3;
String la4;


void setup() {
  pinMode(b1,INPUT);
  pinMode(b2,INPUT);
  pinMode(b3,INPUT);
  pinMode(b4,INPUT);
  pinMode(b5,INPUT);
  pinMode(b6,INPUT);
  pinMode(b7,INPUT);
  pinMode(b8,INPUT);
  pinMode(b9,INPUT);
  pinMode(b10,INPUT);
  pinMode(b11,INPUT);
  pinMode(b12,INPUT);
  Serial.begin(9600);
}

void loop() {

  //--------------MicroSwitches----------------
  vb0 = String(!(digitalRead(b1)));
  vb1 = String(!(digitalRead(b2)));
  vb1 = String(!(digitalRead(b3)));
  vb1 = String(!(digitalRead(b4)));
  vb5 = String(!(digitalRead(b5)));
  vb6 = String(!(digitalRead(b6)));
  vb7 = String(!(digitalRead(b7)));
  vb8 = String(!(digitalRead(b8)));
  vb9 = String(!(digitalRead(b9)));
  vb10 = String(!(digitalRead(b10)));
  vb11 = String(!(digitalRead(b11)));
  vb12 = String(!(digitalRead(b12)));
  
  la1 = (analogRead(laser1) >= 750)? "1" : "0"; 
  la2 = (analogRead(laser2) >= 750)? "1" : "0"; 
  la3 = (analogRead(laser3) >= 750)? "1" : "0"; 
  la4 = (analogRead(laser4) >= 750)? "1" : "0"; 

  //------------PRINT--------------
  Serial.print(
    vb1 +
    vb2 +
    vb3 +
    vb4 +
    vb5 +
    vb6 +
    vb7 +
    vb8 +
    vb9 +
    vb10 +
    vb11 +
    vb12 +
    "0" +
    la1 +
    la2 +
    la3 +
    la4
  );
  //---------DELAY--------------------
  delay(500);
}
