const int dig1 = 2;
const int dig2 = 3;
const int dig3 = 4;
const int dig4 = 5;

const int aPin = 6;
const int bPin = 7;
const int cPin = 8;
const int dPin = 9;
const int ePin = 10;
const int fPin = 11;
const int gPin = 12;
const int dpPin = 13;

const int DTime = 4;

const byte numbers[11][7] = {
  {1,1,1,1,1,1,0}, //zero
  {0,1,1,0,0,0,0}, //one
  {1,1,0,1,1,0,1}, //two
  {1,1,1,1,0,0,1}, //three
  {0,1,1,0,0,1,1}, //four
  {1,0,1,1,0,1,1}, //five
  {1,0,1,1,1,1,1}, //six
  {1,1,1,0,0,0,0}, //seven
  {1,1,1,1,1,1,1}, //eight
  {1,1,1,1,0,1,1}, //nine
  {0,0,0,0,0,0,0}  //off
};

const int mappingPin[7] = {
  aPin,
  bPin,
  cPin,
  dPin,
  ePin,
  fPin,
  gPin
};

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
  initDigits();

  displayNumbers(1, 2, 3, 4);
}

void initDigits() {
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

void displayNumbers(int value1, int value2, int value3, int value4) {
  displayNumber(dig1, value1);
  displayNumber(dig2, value2);
  displayNumber(dig3, value3);
  displayNumber(dig4, value4);
}

void displayNumber(int digit, int value) {
  digitalWrite(digit, HIGH);  

  for (int i = 0; i < 7; i++) {
    if (numbers[value][i] == 1) {
      digitalWrite(mappingPin[i], LOW); 
    }
  }

  delay(DTime);
  initDigits();
}
