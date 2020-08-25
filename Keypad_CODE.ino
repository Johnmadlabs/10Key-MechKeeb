



#include <Mouse.h>
#include <Keyboard.h>

// Defining each pin, with a unique name
#define KEY0 2
#define KEY1 3
#define KEY2 4
#define KEY3 5
#define KEY4 6
#define KEY5 7
#define KEY6 8
#define KEY7 9
#define KEY8 10
#define KEY9 16


void setup() {


  pinMode (KEY0, INPUT_PULLUP);
  pinMode (KEY1, INPUT_PULLUP);
  pinMode (KEY2, INPUT_PULLUP);
  pinMode (KEY3, INPUT_PULLUP);
  pinMode (KEY4, INPUT_PULLUP);
  pinMode (KEY5, INPUT_PULLUP);
  pinMode (KEY6, INPUT_PULLUP);
  pinMode (KEY7, INPUT_PULLUP);
  pinMode (KEY8, INPUT_PULLUP);
  pinMode (KEY9, INPUT_PULLUP);

  //starting the strip
  Keyboard.begin();
  Mouse.begin();


}

void loop() {

//key 0//
  if (digitalRead(KEY0) == LOW)
  {
    Keyboard.press(KEY_LEFT_SHIFT); //change the keyname in the parenthese to any from:https://www.arduino.cc/en/Reference/KeyboardModifiers, if you want multiple, duplicate this command//
    delay(100); //this sets a delay so the keybind doesnt spam, and only goes once per 100 milliseconds in this case//
  }
   if (digitalRead(KEY0) == HIGH)
    {
      Keyboard.releaseAll();
    }


  if (digitalRead(KEY1) == LOW)
  {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.print("x"); //if you want a letter use this command, but dont capitalize unless you want a "SHIFT" click along with your letter(s)//
    delay(100);
  }
   if (digitalRead(KEY1) == HIGH)
    {
      Keyboard.releaseAll();
    }

  if (digitalRead(KEY2) == LOW)
  {
    Keyboard.press(KEY_RIGHT_CTRL);
    Keyboard.print("c");
    delay(100);
  }
   if (digitalRead(KEY2) == HIGH)
    {
      Keyboard.releaseAll();
    }

  if (digitalRead(KEY3) == LOW)
  {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.print("v");
    delay(100);
  }
   if (digitalRead(KEY3) == HIGH)
    {
      Keyboard.releaseAll();
    }

  if (digitalRead(KEY4) == LOW)
  {
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.print("m");
        delay(100);
  }
   if (digitalRead(KEY4) == HIGH)
    {
      Keyboard.releaseAll();
    }


  //Top Right Button//
  if (digitalRead(KEY5) == LOW)
  {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.print("t");
        delay(100);
  }
   if (digitalRead(KEY5) == HIGH)
    {
      Keyboard.releaseAll();
    }
  if (digitalRead(KEY6) == LOW)
  {
    Keyboard.press(KEY_LEFT_ALT);
        delay(100);
  }
   if (digitalRead(KEY6) == HIGH)
    {
      Keyboard.releaseAll();
          delay(100);
    }
  if (digitalRead(KEY7) == LOW)
  {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.print("z");
        delay(100);
  }
   if (digitalRead(KEY7) == HIGH)
    {
      Keyboard.releaseAll();
    }
  if (digitalRead(KEY8) == LOW)
  {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.print("y");
        delay(100);
  }
   if (digitalRead(KEY8) == HIGH)
    {
      Keyboard.releaseAll();
    }
  if (digitalRead(KEY9) == LOW)
  {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.print("w");
        delay(100);
  }
   if (digitalRead(KEY9) == HIGH)
    {
      Keyboard.releaseAll();
    }

}
