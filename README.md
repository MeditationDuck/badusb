# badusb
このbadusbはpowershellを用いて、image.jpgをデスクトップの壁紙に設定するものです。
キーボードレイアウトは英語配列です。
キーボードによって記号の位置などが違うためbadusbはそれぞれに合わせたものを使うか、一旦キーボードレイアウトを変更してからbadusbを指す必要があります。

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
が、今回はbadusbにやらせる作業が少なかったのですべて一つずつやってみた。

画像サイズも可能な限り小さくした。
DuckyScriptを使ってBadusbに書き込みをしています。
