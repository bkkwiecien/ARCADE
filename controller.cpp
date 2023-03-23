#include <Keyboard.h>

const int BUTTON_1 = 2;
const int BUTTON_2 = 3;
const int BUTTON_3 = 4;
const int BUTTON_4 = 5;
const int BUTTON_5 = 6;
const int BUTTON_6 = 7;
const int BUTTON_7 = 8;
const int BUTTON_8 = 9;
const int BUTTON_9 = 10;
const int BUTTON_10 = 11;

void setup() {
  pinMode(BUTTON_1, INPUT_PULLUP);
  pinMode(BUTTON_2, INPUT_PULLUP);
  pinMode(BUTTON_3, INPUT_PULLUP);
  pinMode(BUTTON_4, INPUT_PULLUP);
  pinMode(BUTTON_5, INPUT_PULLUP);
  pinMode(BUTTON_6, INPUT_PULLUP);
  pinMode(BUTTON_7, INPUT_PULLUP);
  pinMode(BUTTON_8, INPUT_PULLUP);
  pinMode(BUTTON_9, INPUT_PULLUP);
  pinMode(BUTTON_10, INPUT_PULLUP);

  Keyboard.begin();
}

void loop() {
  //JOYSTICK KEYS
  if (digitalRead(BUTTON_1) == LOW) {
    Keyboard.press(KEY_LEFT_ARROW);
    delay(50);
    Keyboard.releaseAll();
  }
  if (digitalRead(BUTTON_2) == LOW) {
    Keyboard.press(KEY_UP_ARROW);
    delay(50);
    Keyboard.releaseAll();
  }
  if (digitalRead(BUTTON_3) == LOW) {
    Keyboard.press(KEY_RIGHT_ARROW);
    delay(50);
    Keyboard.releaseAll();
  }
  if (digitalRead(BUTTON_4) == LOW) {
    Keyboard.press(KEY_DOWN_ARROW);
    delay(50);
    Keyboard.releaseAll();
  }

  //BUTTONS KEYS
  if (digitalRead(BUTTON_5) == LOW) {
    Keyboard.write(SHIFT);
    delay(50);
    Keyboard.releaseAll();
  }
  if (digitalRead(BUTTON_6) == LOW) {
    Keyboard.write(SPACE);
    delay(50);
    Keyboard.releaseAll();
  }
  if (digitalRead(BUTTON_7) == LOW) {
    Keyboard.write('c');
    delay(50);
    Keyboard.releaseAll();
  }
  if (digitalRead(BUTTON_8) == LOW) {
    Keyboard.write(OPTION);
    delay(50);
    Keyboard.releaseAll();
  }
  if (digitalRead(BUTTON_9) == LOW) {
    Keyboard.write(ENTER);
    delay(50);
    Keyboard.releaseAll();
  }
  if (digitalRead(BUTTON_10) == LOW) {
    Keyboard.write(CONTROL);
    delay(50);
    Keyboard.releaseAll();
  }
}
