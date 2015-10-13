#ifndef TWINKLE_H
#define TWINKLE_H

#include <avr/pgmspace.h>

const int PROGMEM   twinkle_count = 14 + 14 + 14; // the number of notes

const char PROGMEM  twinkle_notes[] = "DDAABBAGGFFEEDAAGGFFEAAGGFFEDDAABBAGGFFEED";

const int PROGMEM   twinkle_beats[] = { 8, 8, 8, 8, 8, 8, 16, 8, 8, 8, 8, 8, 8, 16,
                                        8, 8, 8, 8, 8, 8, 16, 8, 8, 8, 8, 8, 8, 16,
                                        8, 8, 8, 8, 8, 8, 16, 8, 8, 8, 8, 8, 8, 16};

const int PROGMEM   twinkle_tempo = 150;

#endif
