
#include "expressions.h"


void setup() {
  u8g2.begin();
  u8g2.clearBuffer();
}

void loop() {
  u8g2.clearBuffer();

  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_helvB14_tf);
  u8g2.drawStr(1, 40, "Normal");
  u8g2.sendBuffer();
  delay(2000);

  normal();
  delay(2000);


  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_helvB14_tf);
  u8g2.drawStr(1, 40, "Blink");
  u8g2.sendBuffer();
  delay(2000);

  blink();
  delay(2000);

  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_helvB14_tf);
  u8g2.drawStr(1, 40, "Sad");
  u8g2.sendBuffer();
  delay(2000);

  sad();
  delay(2000);


  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_helvB14_tf);
  u8g2.drawStr(1, 40, "Upset");
  u8g2.sendBuffer();
  delay(2000);

  upset();
  delay(2000);


  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_helvB14_tf);
  u8g2.drawStr(1, 40, "Wonder");
  u8g2.sendBuffer();
  delay(2000);

  wonder();
  delay(2000);



  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_helvB14_tf);
  u8g2.drawStr(1, 40, "Happy");
  u8g2.sendBuffer();
  delay(2000);

  happy();
  delay(2000);


  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_helvB14_tf);
  u8g2.drawStr(1, 40, "Cute");
  u8g2.sendBuffer();
  delay(2000);

  cute();
  delay(2000);



  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_helvB14_tf);
  u8g2.drawStr(1, 40, "Angry");
  u8g2.sendBuffer();
  delay(2000);

  angry();
  delay(2000);

  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_helvB14_tf);
  u8g2.drawStr(1, 40, "Suspicious");
  u8g2.sendBuffer();
  delay(2000);

  suspicious();
  delay(2000);

  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_helvB14_tf);
  u8g2.drawStr(1, 40, "downeye");
  u8g2.sendBuffer();
  delay(2000);

  downeye();
  delay(2000);

  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_helvB14_tf);
  u8g2.drawStr(1, 40, "upeye");
  u8g2.sendBuffer();
  delay(2000);

  upeye();
  delay(2000);

  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_helvB14_tf);
  u8g2.drawStr(1, 40, "lefteye");
  u8g2.sendBuffer();
  delay(2000);

  lefteye();
  delay(2000);

  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_helvB14_tf);
  u8g2.drawStr(1, 40, "righteye");
  u8g2.sendBuffer();
  delay(2000);

  righteye();
  delay(2000);
}
