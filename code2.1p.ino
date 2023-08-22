int units = 500;
int three_units = 1500;
int button = 0;

volatile bool btnpressed = false;




void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2,INPUT);
}

void dot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(units);
}

void dash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(three_units);
}

void space() {
  digitalWrite(LED_BUILTIN, LOW);
  delay(units);
}

void K() {
  dash();
  space();
  dot();
  space();
  dash();
}

void R() {
  dot();
  space();
  dash();
  space();
  dot();
}


void I() {
  dot();
  space();
  dot();
}

void T() {
  dash();
}

void A() {
  dot();
  space();
  dash();
}

void mainfunction()
{
  K();
  R();
  I();
  T();
  I();
  K();
  A();
}




void loop() {

  button = digitalRead(2);
  if(button ==1)
  {
    mainfunction();
    digitalWrite(LED_BUILTIN,LOW);
  }
  delay(5000);

}
