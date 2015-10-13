#ifndef HOT_CROSS_H
#define HOT_CROSS_H

#include <avr/pgmspace.h>

const int   PROGMEM hot_cross_count = 17; // the number of notes

const char  PROGMEM hot_cross_notes[] = "BAGBAGGGGGAAAABAG";

const int   PROGMEM hot_cross_beats[] = { 8, 8, 16, 8, 8, 16, 4, 4, 4, 4, 4, 4, 4, 4, 8, 8, 16 };

const int   PROGMEM hot_cross_tempo = 150;

#endif
