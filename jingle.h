#ifndef JINGLE_H
#define JINGLE_H

#include <avr/pgmspace.h>

const int   PROGMEM jingle_count = 13 + 11 + 12 + 14 + 16 + 18;

const char  PROGMEM jingle_notes[] = "CAGFCCCCAGFD " "DBAGE ccBGA" "CAGFC CAGFDD"
                                     "DBAGccccdcBGF " "AAAAAAAcFGA BBBB" "BAAAAAGGAGcccBGFf ";

const int   PROGMEM jingle_beats[] = { 8,  8,  8,  8, 24,  4,  4,  8,  8,  8,  8, 24,  8,                          // 13
                                       8,  8,  8,  8, 24,  8,  8,  8,  8,  8, 32,                                  // 11
                                       8,  8,  8,  8, 24,  8,  8,  8,  8,  8, 24,  8,                              // 12
                                       8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8,  8, 24,  8,                      // 14
                                       8,  8, 16,  8,  8, 16,  8,  8, 12,  4, 24,  8,  8,  8, 12,  4,              // 16
                                       8,  8,  8,  4,  4,  8,  8,  8,  8,  8, 16, 16,  8,  8,  8,  8, 16,  8,  8}; // 18

const int   PROGMEM jingle_tempo = 150;

#endif
