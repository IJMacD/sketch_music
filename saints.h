#ifndef SAINTS_H
#define SAINTS_H

#include <avr/pgmspace.h>

const int PROGMEM   saints_count = 11 + 12 + 9; // the number of notes

const char PROGMEM  saints_notes[] = "GBcdGBcdGBc" "dBGBABAGGBdd" "dcBcdBGAG";

const int PROGMEM   saints_beats[] = { 8, 8, 8, 32 + 8, 8, 8, 8, 32 + 8, 8, 8, 8,
                                       16, 16, 16, 16, 32 + 8, 16, 8, 16, 8, 16, 8, 8,
                                       8, 16 + 16, 8, 8, 16, 16, 16, 16, 32 + 8};
  
const int PROGMEM   saints_tempo = 150;

#endif
