

# yumeno_robot
* https://github.com/yumeno-robot
* https://twitter.com/YumenoRobot


## Arduino_DDK0668T 説明
* このファイルはArduinoと6CHモーターコントローラー(https://www.daisen-netstore.com/shopdetail/000000000074/)をUARTシリアル通信させ動かすプログラムになっています。

## 必要なもの
1.  Arduino
2.  6CHモーターコントローラー
3.  配線
4.  電池
5.  (モーター)

## ソフトウェア使い方
 ・Mota.Setup(//variable//);という関数の中にシリアル番号を入力してください
 ※(Serial1.setup)の数字の部分になり、なしの場合は０を入れてください。※

 ・Mota.turn(0, 0, 0, 0, 0, 0);という関数の中には6CHモーターコントローラーの出力を代入してください。
 ※値は-100から100までの値が入り、
 マイナスは逆転
 プラスは正転します。※

 ##  ハードウェア使い方
* Arduino　　　　　6ch
* GND------------------GND
* 5V----------------------5V
* RX----------------------TX
* TX----------------------RX
    に接続し、6ch側に電池を接続します。






