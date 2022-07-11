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
  Serial.print("s1:");
  Serial.println(analogRead(s1));
   Serial.print("s2:");
    Serial.println(analogRead(s2));
     Serial.print("s3:");
      Serial.println(analogRead(s3));
       Serial.print("s4:");
        Serial.println(analogRead(s4));
   delay(10);

Serial.print("1:");
 Serial.println(!digitalRead (b1));

 Serial.print("2:");
 Serial.println(!digitalRead (b2));

 Serial.print("3:");
 Serial.println(!digitalRead (b3));

 Serial.print("4:");
 Serial.println(!digitalRead (b4));

 Serial.print("5:");
 Serial.println(!digitalRead (b5));

 Serial.print("6:");
 Serial.println(!digitalRead (b6));

 Serial.print("7:");
 Serial.println(!digitalRead (b7));

 Serial.print("8:");
 Serial.println(!digitalRead (b8));

 Serial.print("9:");
 Serial.println(!digitalRead (b9));

Serial.print("10:");
 Serial.println(!digitalRead (b10));

 Serial.print("11:");
 Serial.println(!digitalRead (b11));

 Serial.print("12:");
 Serial.println(!digitalRead (b12));

delay (3000);
}
