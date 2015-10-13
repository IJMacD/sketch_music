#ifndef BIRTHDAY_H
#define BIRTHDAY_H

#include <avr/pgmspace.h>

const int PROGMEM  birthday_count = 28; // the number of notes

const char PROGMEM birthday_notes[] = "GGAGcB GGAGdc GGxecBA yyecdc";

const int PROGMEM  birthday_beats[] = { 2, 2, 8, 8, 8, 16, 1, 2, 2, 8, 8,8, 16, 1, 2,2,8,8,8,8,16, 1,2,2,8,8,8,16 };

const int PROGMEM  birthday_tempo = 150;

#endif
