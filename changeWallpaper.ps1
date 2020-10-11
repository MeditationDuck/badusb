wget -Uri https://github.com/MeditationDuck/badusb/blob/main/image.jpg?raw=true -outfile $env:USERPROFILE\image.jpg



Set-ItemProperty -path "HKCU:Control Panel\Desktop" -name wallpaper -value $env:USERPROFILE\image.jpg
rundll32.exe user32.dll,UpdatePerUserSystemParameters 1, True
rundll32.exe user32.dll,UpdatePerUserSystemParameters 1, True
rundll32.exe user32.dll,UpdatePerUserSystemParameters 1, True
rundll32.exe user32.dll,UpdatePerUserSystemParameters 1, True
rundll32.exe user32.dll,UpdatePerUserSystemParameters 1, True
rundll32.exe user32.dll,UpdatePerUserSystemParameters 1, True
rundll32.exe user32.dll,UpdatePerUserSystemParameters 1, True
rundll32.exe user32.dll,UpdatePerUserSystemParameters 1, True
rundll32.exe user32.dll,UpdatePerUserSystemParameters 1, True
rundll32.exe user32.dll,UpdatePerUserSystemParameters 1, True
rm $env:USERPROFILE\image.jpg