#include <util\delay.h>

// LCD data pins
const int D0 = 1;
const D1 = 2;
const D2 = 3;
const D3 = 4;
const D4 = 5;
const D5 = 6;
const D6 = 7;
const D7 = 8;

// Pins for the functions of the LCD
#define RS
#define DATAOP
#define COMMAND
#define ENABLE

// LCD Commands
#define ENTRYMODE 0x04
#define DECREMENT 0x00
#define INCREMENT 0x02
#define SHIFTOFF 0x00
#define SHIFTON 0x01
#define SETDDRAM 0x80

// Setup the LCD
void setupLCD()
{

}

// Write to the LCD
void WriteToLcd(uint8_t reg_type, uint8_t data)
{

}

