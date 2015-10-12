#ifndef SAINTS_H
#define SAINTS_H

#include "interface.h"

static Tune saints = {

  .count = 11 + 12 + 9, // the number of notes

  .notes = "GBcdGBcdGBc" "dBGBABAGGBdd" "dcBcdBGAG",

  .beats = { 8, 8, 8, 32 + 8, 8, 8, 8, 32 + 8, 8, 8, 8,
             16, 16, 16, 16, 32 + 8, 16, 8, 16, 8, 16, 8, 8,
             8, 16 + 16, 8, 8, 16, 16, 16, 16, 32 + 8},
  
  .tempo = 150
};

#endif
