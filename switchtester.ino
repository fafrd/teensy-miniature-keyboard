// cmstorm switch tester program, run from teensy++ 2.0
// top row:    keyOne, keyTwo, keyThree
// second row: keyFour, keyFive, keySix
const int keyOne = 11, keyTwo = 38, keyThree = 24;
const int keyFour = 17, keyFive = 45, keySix = 3;
const int ledPin =  6;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(keyOne, INPUT_PULLUP);
  pinMode(keyTwo, INPUT_PULLUP);
  pinMode(keyThree, INPUT_PULLUP);
  pinMode(keyFour, INPUT_PULLUP);
  pinMode(keyFive, INPUT_PULLUP);
  pinMode(keySix, INPUT_PULLUP);
  Keyboard.begin();
}

void keyPress(int pin, uint16_t key)
{
  while(digitalRead(pin) == LOW) {
    Keyboard.press(key);
        delay(1);
  }
  Keyboard.release(key);
}

void loop()
{
  keyPress(keyOne, KEY_PAGE_UP);
  keyPress(keyTwo, KEY_UP_ARROW);
  keyPress(keyThree, KEY_PAGE_DOWN);
  keyPress(keyFour, KEY_LEFT_ARROW);
  keyPress(keyFive, KEY_DOWN_ARROW);
  keyPress(keySix, KEY_RIGHT_ARROW);
 
  delay(1);
  digitalWrite(ledPin, LOW);
}
