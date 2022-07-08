//-----------Defines----------
#define sw1 40
#define sw2 41
#define sw3 38
#define sw4 39
#define sw5 36
#define sw6 37
#define sw7 34
#define sw8 35
#define sw9 32
#define sw10 33
#define sw11 30
#define sw12 31

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
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  pinMode(sw3,INPUT);
  pinMode(sw4,INPUT);
  pinMode(sw5,INPUT);
  pinMode(sw6,INPUT);
  pinMode(sw7,INPUT);
  pinMode(sw8,INPUT);
  pinMode(sw9,INPUT);
  pinMode(sw10,INPUT);
  pinMode(sw11,INPUT);
  pinMode(sw12,INPUT);
  Serial.begin(9600);
}

void loop() {

  //--------------MicroSwitches----------------
  vb0 = String(!(digitalRead(sw1)));
  vb1 = String(!(digitalRead(sw2)));
  vb1 = String(!(digitalRead(sw3)));
  vb1 = String(!(digitalRead(sw4)));
  vb5 = String(!(digitalRead(sw5)));
  vb6 = String(!(digitalRead(sw6)));
  vb7 = String(!(digitalRead(sw7)));
  vb8 = String(!(digitalRead(sw8)));
  vb9 = String(!(digitalRead(sw9)));
  vb10 = String(!(digitalRead(sw10)));
  vb11 = String(!(digitalRead(sw11)));
  vb12 = String(!(digitalRead(sw12)));

  Serial.println(analogRead(laser1));
  la1 = (analogRead(laser1) >= 750)? "1" : "0"; 
  la2 = (analogRead(laser2) >= 750)? "1" : "0"; 
  la3 = (analogRead(laser3) >= 750)? "1" : "0"; 
  la4 = (analogRead(laser4) >= 750)? "1" : "0"; 

  //------------PRINT--------------
  Serial.println(
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
