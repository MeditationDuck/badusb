# badusb
 Badusbの勉強をしようと思い始めました。実際に悪意のあるソフトウェアをダウンロードして実行するものはちょっと危険なので、ここでは実行権限をいじってファイルをダウンロードして実行し、
 その中では、画像をダウンロードし、デスクトップの背景を変更するというものになっています！＞＿＜
 
このbadusbはpowershellを用いて、image.jpgをデスクトップの壁紙に設定するものです。
キーボードレイアウトは英語配列です。
キーボードによって記号の位置などが違うためbadusbはそれぞれに合わせたものを使うか、一旦キーボードレイアウトを変更してからbadusbを指す必要があります

ファイルをダウンロード

```
wget -Uri https://github.com/MeditationDuck/badusb/blob/main/image.jpg?raw=true -outfile $env:USERPROFILE\image.jpg
```

壁紙を設定
```
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
```

ps1ファイルを作成しexecutionpolicyを変更そして実行したほうがダウンロード速度などに気を使わなくていい
可能な限りではそのようにすべきだと思う。


画像サイズも可能な限り小さくした。
DuckyScriptを使ってBadusbに書き込みをしています。
