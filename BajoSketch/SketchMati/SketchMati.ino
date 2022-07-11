#define s1 A0
#define s2 A1
#define s3 A2
#define s4 A3


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

int b[] = {b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12};
int s[] = {s1, s2, s3, s4};

String sw1;
String sw2;
String sw3;
String sw4;
String sw5;
String sw6;
String sw7;
String sw8;
String sw9;
String sw10;
String sw11;
String sw12;

String la1;
String la2;
String la3;
String la4;

String output;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
 for (int i = 1; i >= 4; i++)
{
  pinMode (s[i], INPUT);
}     

for (int i = 1; i >= 12; i++)
{
  pinMode (b[i], INPUT);
}                       
}

void loop() {
    
  sw1 = String(!digitalRead (b1));
  sw2 = String(!digitalRead (b2));
  sw3 = String(!digitalRead (b3));
  sw4 = String(!digitalRead (b4));
  sw5 = String(!digitalRead (b5));
  sw6 = String(!digitalRead (b6));
  sw7 = String(!digitalRead (b7));
  sw8 = String(!digitalRead (b8));
  sw9 = String(!digitalRead (b9));
  sw10 = String(!digitalRead (b10));
  sw11 = String(!digitalRead (b11));
  sw12 = String(!digitalRead (b12));
  
  la1 = (analogRead(s1) >= 750)? "1" : "0"; 
  la2 = (analogRead(s2) >= 750)? "1" : "0"; 
  la3 = (analogRead(s3) >= 750)? "1" : "0"; 
  la4 = (analogRead(s4) >= 750)? "1" : "0"; 

  output = sw12 + 
           sw11 +
           sw10 +
           sw9 +
           sw8 +
           sw7 +
           sw6 +
           sw5 +
           sw4 +
           sw3 +
           sw2 +
           sw1 + 
           "0" +
           la1 +
           la2 +
           la3 +
           la4;

  Serial.println(output);
  
  delay (500);

}
