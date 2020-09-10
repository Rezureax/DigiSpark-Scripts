// Author: Rezureax //
// This Scripts opens a webpage to fake a windows update //
#include "DigiKeyboardDE.h"
void setup() {
  //empty
}
void loop() {
  DigiKeyboard.delay(2000);
  DigiKeyboardDe.sendKeyStroke(0);
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboardDe.println("http://fakeupdate.net/win10ue");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboardDe.sendKeyStroke(KEY_F11);
  for(;;){ /*empty*/ }
}
