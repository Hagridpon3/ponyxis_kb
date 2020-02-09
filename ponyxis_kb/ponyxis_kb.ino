/* @file HelloKeypad.pde
  || @version 1.0
  || @author Alexander Brevig
  || @contact alexanderbrevig@gmail.com
  ||
  || @description
  || | Demonstrates the simplest use of the matrix Keypad library.
  || #
*/
#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 13; //three columns
char keys[ROWS][COLS] = {
  {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', ':', '-', 'B'},
  {'E', 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'P', '\n'},
  {'C', 'a', 's', 'd', 'f', 'g', 'h' ,'j', 'k', 'l', ';', 'L', 'R'},
  {'S', 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/', 'S', ' '}
};
byte rowPins[ROWS] = {2, 19, 4, 5}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup() {
  Serial.begin(9600);
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    Serial.print(key);
  }
}
