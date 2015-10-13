#ifndef UNDER_SEA_H
#define UNDER_SEA_H

#include <avr/pgmspace.h>

const int   PROGMEM under_sea_count = 13 + 13 + 13 + 13;

const char  PROGMEM under_sea_notes[] = " EEEEDFEC CEC"
                                        "DDC  EEEEDFEC"
                                        " CEECDDC  FAAF"
                                        "EGEG DFFEGFE ";

const int   PROGMEM under_sea_beats[] = { 8, 4, 8, 4, 8,    8, 8, 8, 8,       8, 4, 24, 8,
                                          8, 8, 8, 8,       8, 4, 8, 4, 8,    8, 8, 8, 8,
                                          8, 4, 8, 4, 8,    8, 8, 8, 8,       8, 4, 8, 4, 8,
                                          8, 8, 8, 8,       8, 4, 8, 4, 8,    8, 8, 8, 8};

const int   PROGMEM under_sea_tempo = 150;

#endif
