/*
Modified by nexysllanes 5-18-24

*/


#include "expressions.h"


void setup() {
  u8g2.begin();
  u8g2.clearBuffer();
}

void loop() {
  int randomAction = random(1, 10);  // Generate a random number


  if (randomAction <= 5) {
    normal();  // 50% chance for normal eye movement
  } else if (randomAction <= 10) {
    blink();  // 50% chance for blinking
  } else {

    int randomActionZ = random(1, 8);  // Generate a random number

    switch (randomActionZ) {
      case 1:
        normal();
        break;
      case 2:
        blink();
        break;
      case 3:
        upeye();
        break;
      case 4:
        downeye();
        break;
      case 5:
        lefteye();
        break;
      case 6:
        righteye();
        break;
      case 7:
        cute();
        break;
      default:
        // Handle any other cases if needed
        break;
    }
  }

  // Add a delay to simulate natural eye movements
  delay(random(1000, 3000));  // Adjust the delay range as desired
}
