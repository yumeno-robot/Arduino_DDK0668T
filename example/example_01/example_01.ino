
#include "Arduino.h"
#include "mota_math.h"
MOTA Mota;


void setup()
{
  //Mote.Setup(シリアル番号);
  Mota.Setup(1);
}


void loop()
{
  //Mota.turn(-100から100までの値＊６個);
  //delayを入れると長くなるよ

  Mota.turn(100, 100, 100, 100, 100, 100);
  delay(500);
  Mota.turn(-100, -100, -100, -100, -100, -100);
  delay(500);
}
