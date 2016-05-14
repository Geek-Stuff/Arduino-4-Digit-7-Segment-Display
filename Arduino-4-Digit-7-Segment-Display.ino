int dig1 = 2;
int dig2 = 3;
int dig3 = 4;
int dig4 = 5;

int aPin = 6;
int bPin = 7;
int cPin = 8;
int dPin = 9;
int ePin = 10;
int fPin = 11;
int gPin = 12;
int dpPin = 13;

int DTime = 4;

void setup() {
  pinMode(dig1, OUTPUT);
  pinMode(dig2, OUTPUT);
  pinMode(dig3, OUTPUT);
  pinMode(dig4, OUTPUT);
  pinMode(aPin, OUTPUT);
  pinMode(bPin, OUTPUT);
  pinMode(cPin, OUTPUT);
  pinMode(dPin, OUTPUT);
  pinMode(ePin, OUTPUT); 
  pinMode(fPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(dpPin, OUTPUT);
}

void loop() {
  clearScreen();
  
  digitalWrite(dig1, HIGH);  
  displayNumber(1);
  delay(DTime);
  digitalWrite(dig1, LOW);
 
  digitalWrite(dig2, HIGH);  
  displayNumber(2);
  delay(DTime);
  digitalWrite(dig2, LOW);
 
  digitalWrite(dig3, HIGH);  
  displayNumber(3);
  delay(DTime);
  digitalWrite(dig3, LOW);
 
  digitalWrite(dig4, HIGH);  
  displayNumber(4);
  delay(DTime);
  digitalWrite(dig4, LOW);
}

void clearScreen() {
  digitalWrite(dig1, LOW);
  digitalWrite(dig2, LOW);
  digitalWrite(dig3, LOW);
  digitalWrite(dig4, LOW); 

  digitalWrite(aPin, HIGH); 
  digitalWrite(bPin, HIGH); 
  digitalWrite(cPin, HIGH); 
  digitalWrite(dPin, HIGH); 
  digitalWrite(ePin, HIGH); 
  digitalWrite(fPin, HIGH); 
  digitalWrite(gPin, HIGH); 
  digitalWrite(dpPin, HIGH); 
}

void displayNumber(int x){
   switch(x){
     case 1: one(); break;
     case 2: two(); break;
     case 3: three(); break;
     case 4: four(); break;
     case 5: five(); break;
     case 6: six(); break;
     case 7: seven(); break;
     case 8: eight(); break;
     case 9: nine(); break;
     default: zero(); break;
   }
}

void one()
{
  digitalWrite( aPin, HIGH);
  digitalWrite( bPin, LOW);
  digitalWrite( cPin, LOW);
  digitalWrite( dPin, HIGH);
  digitalWrite( ePin, HIGH);
  digitalWrite( fPin, HIGH);
  digitalWrite( gPin, HIGH);
}

void two()
{
  digitalWrite( aPin, LOW);
  digitalWrite( bPin, LOW);
  digitalWrite( cPin, HIGH);
  digitalWrite( dPin, LOW);
  digitalWrite( ePin, LOW);
  digitalWrite( fPin, HIGH);
  digitalWrite( gPin, LOW);
}

void three()
{
  digitalWrite( aPin, LOW);
  digitalWrite( bPin, LOW);
  digitalWrite( cPin, LOW);
  digitalWrite( dPin, LOW);
  digitalWrite( ePin, HIGH);
  digitalWrite( fPin, HIGH);
  digitalWrite( gPin, LOW);
}

void four()
{
  digitalWrite( aPin, HIGH);
  digitalWrite( bPin, LOW);
  digitalWrite( cPin, LOW);
  digitalWrite( dPin, HIGH);
  digitalWrite( ePin, HIGH);
  digitalWrite( fPin, LOW);
  digitalWrite( gPin, LOW);
}

void five()
{
  digitalWrite( aPin, LOW);
  digitalWrite( bPin, HIGH);
  digitalWrite( cPin, LOW);
  digitalWrite( dPin, LOW);
  digitalWrite( ePin, HIGH);
  digitalWrite( fPin, LOW);
  digitalWrite( gPin, LOW);
}

void six()
{
  digitalWrite( aPin, LOW);
  digitalWrite( bPin, HIGH);
  digitalWrite( cPin, LOW);
  digitalWrite( dPin, LOW);
  digitalWrite( ePin, LOW);
  digitalWrite( fPin, LOW);
  digitalWrite( gPin, LOW);
}

void seven()
{
  digitalWrite( aPin, LOW);
  digitalWrite( bPin, LOW);
  digitalWrite( cPin, LOW);
  digitalWrite( dPin, HIGH);
  digitalWrite( ePin, HIGH);
  digitalWrite( fPin, HIGH);
  digitalWrite( gPin, HIGH);
}

void eight()
{
  digitalWrite( aPin, LOW);
  digitalWrite( bPin, LOW);
  digitalWrite( cPin, LOW);
  digitalWrite( dPin, LOW);
  digitalWrite( ePin, LOW);
  digitalWrite( fPin, LOW);
  digitalWrite( gPin, LOW);
}

void nine()
{
  digitalWrite( aPin, LOW);
  digitalWrite( bPin, LOW);
  digitalWrite( cPin, LOW);
  digitalWrite( dPin, LOW);
  digitalWrite( ePin, HIGH);
  digitalWrite( fPin, LOW);
  digitalWrite( gPin, LOW);
}

void zero()
{
  digitalWrite( aPin, LOW);
  digitalWrite( bPin, LOW);
  digitalWrite( cPin, LOW);
  digitalWrite( dPin, LOW);
  digitalWrite( ePin, LOW);
  digitalWrite( fPin, LOW);
  digitalWrite( gPin, HIGH);
}
