#define _LED 13

void setup() {
  pinMode(_LED, OUTPUT);
}

void loop() {
  if(millis() % 1000 == 0) {
    digitalWrite(_LED, !digitalRead(_LED));
    delay(1);
  }
}
