/*
Modified by nexysllanes 5-18-24

*/

#ifndef expressions_h
#define expression_h

#include "Arduino.h"
#include <U8g2lib.h>
#include <U8x8lib.h>
#include <SoftwareSerial.h>


U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/U8X8_PIN_NONE);


// eye close expression
void close() {
  u8g2.clearBuffer();

  u8g2.drawRBox(5, 19, 55, 18, 6);
  u8g2.drawRBox(67, 19, 55, 18, 6);
  u8g2.setDrawColor(0);

  u8g2.drawBox(5, 1, 55, 18);
  u8g2.drawBox(67, 1, 55, 18);

  u8g2.setDrawColor(1);
  u8g2.sendBuffer();
}

// normal expression
void normal() {
  u8g2.clearBuffer();
  u8g2.drawRBox(8, 12, 50, 35, 9);
  u8g2.drawRBox(70, 12, 50, 35, 9);
  u8g2.sendBuffer();
}

// blink expression
void blink() {

  normal();
  close();
  delay(50);
  normal();
}

// sad expression
void sad() {
  for (int i = 0; i <= 15; i += 3) {
    u8g2.clearBuffer();

    u8g2.drawRBox(8, 18, 50, 29, 9);
    u8g2.drawRBox(70, 18, 50, 29, 9);
    u8g2.setDrawColor(0);

    u8g2.drawTriangle(3, 14, 64, 14, 3, 21 + i);
    u8g2.drawTriangle(68, 14, 124, 21 + i, 124, 14);

    u8g2.setDrawColor(1);

    u8g2.sendBuffer();
  }
}

// upset expression
void upset() {
  int q = -15;
  u8g2.clearBuffer();

  u8g2.drawRBox(8, 12, 50, 35, 9);
  u8g2.drawRBox(70, 12, 50, 35, 9);
  u8g2.setDrawColor(0);

  u8g2.drawBox(8, q, 50, 35);
  u8g2.drawBox(70, q, 50, 35);
  u8g2.setDrawColor(1);

  u8g2.sendBuffer();
  // to make the smoth animation
  if (q <= -7) { q += 3; }
}


// wonder expression with smoth animation
void wonder() {
  u8g2.drawRBox(8, 12, 50, 35, 9);
  u8g2.drawRBox(70, 12, 50, 35, 9);

  for (int i = 1; i <= 10; i += 4) {
    u8g2.clearBuffer();
    u8g2.drawRBox(8, 12 + i, 50, 35 - i, 9);
    u8g2.drawRBox(70, 12, 50, 35, 9);
    u8g2.sendBuffer();
  }
  delay(1600);


  for (int i = 1; i <= 10; i += 4) {
    u8g2.clearBuffer();
    u8g2.drawRBox(8, 22 - i, 50, 25 + i, 9);
    u8g2.drawRBox(70, 12 + i, 50, 35 - i, 9);
    u8g2.sendBuffer();
  }
  delay(1600);
}



// happy expression with smoth animation
void happy() {
  for (int i = 62; i > 58; i -= 3) {
    u8g2.clearBuffer();

    u8g2.drawRBox(8, 12, 50, 35, 11);
    u8g2.drawRBox(70, 12, 50, 35, 11);
    u8g2.setDrawColor(0);

    u8g2.drawDisc(33, i, 38, U8G2_DRAW_ALL);
    //                33  62 38   draw all
    u8g2.drawDisc(95, i, 38, U8G2_DRAW_ALL);

    u8g2.setDrawColor(1);

    u8g2.sendBuffer();
  }
}



void cute() {
  for (int i = 0; i <= 2; i += 2) {
    u8g2.clearBuffer();
    u8g2.drawRBox(8, 12, 50, 35, 12);
    u8g2.drawRBox(70, 12, 50, 35, 12);
    u8g2.setDrawColor(0);
    u8g2.drawDisc(30, 66 - i, 40, U8G2_DRAW_ALL);
    //                33  62 38   draw all
    u8g2.drawDisc(98, 66 - i, 40, U8G2_DRAW_ALL);
    //               95   62 38
    u8g2.setDrawColor(1);
    u8g2.sendBuffer();
  }
}


// angry expression
void angry() {
  for (int i = 0; i <= 15; i += 3) {
    u8g2.clearBuffer();
    u8g2.drawRBox(8, 18, 50, 29, 9);
    u8g2.drawRBox(70, 18, 50, 29, 9);
    u8g2.setDrawColor(0);
    u8g2.drawTriangle(3, 14, 64, 18 + i, 124, 14);
    u8g2.setDrawColor(1);
    u8g2.sendBuffer();
  }
}
// string expression
void iam() {
  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_ncenB08_tr);
  u8g2.drawStr(5, 15, "My name is Akno");
  u8g2.drawStr(5, 30, "Nice to meet you :)");

  u8g2.sendBuffer();
}

// string expression
void youmademe() {

  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_helvB08_tf);
  u8g2.drawStr(1, 15, "The person who made me");
  u8g2.drawStr(1, 30, "Is Nikko :) ");
  u8g2.drawStr(1, 45, "He is such a great person");

  u8g2.sendBuffer();
}

void suspicious() {
  for (int i = 0; i <= 10; i += 3) {
    u8g2.clearBuffer();
    u8g2.drawRBox(8, 12, 50, 20, 9);
    u8g2.drawRBox(70, 12, 50, 20, 9);
    u8g2.setDrawColor(0);
    u8g2.drawTriangle(12, 12, 64, 12 + i, 107, 12);
    u8g2.setDrawColor(1);
    u8g2.sendBuffer();
  }
}

void downeye() {

  close();
  delay(120);
  for (int i = 0; i <= 12; i += 4) {
    u8g2.clearBuffer();
    u8g2.drawRBox(8, 22 + i, 50, 21, 9);
    u8g2.drawRBox(70, 22 + 12, 50, 21, 9);
    u8g2.sendBuffer();
  }
}

void righteye() {
  close();
  delay(120);
  for (int i = 0; i <= 8; i += 4) {
    u8g2.clearBuffer();
    u8g2.drawRBox(8 - i, 17, 50, 27, 9);
    u8g2.drawRBox(70 - i, 17, 50, 27, 9);
    u8g2.sendBuffer();
  }
}

void lefteye() {
  close();
  delay(120);
  for (int i = 0; i <= 8; i += 4) {
    u8g2.clearBuffer();
    u8g2.drawRBox(8 + i, 17, 50, 27, 9);
    u8g2.drawRBox(70 + i, 17, 50, 27, 9);
    u8g2.sendBuffer();
  }
}

void upeye() {
  close();
  delay(120);
  for (int i = 0; i <= 12; i += 4) {
    u8g2.clearBuffer();
    u8g2.drawRBox(8, 12 - i, 50, 25, 9);
    u8g2.drawRBox(70, 12 - 12, 50, 25, 9);
    u8g2.sendBuffer();
  }
}


#endif