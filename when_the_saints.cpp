#include "interface.h"
#include "saints.h"

int saints.length = 11 + 12 + 9; // the number of notes

char saints.notes[] = "GBcdGBcdGBc" "dBGBABAGGBdd" "dcBcdBGAG";

int saints.beats[] = { 8, 8, 8, 32 + 8, 8, 8, 8, 32 + 8, 8, 8, 8,
                16, 16, 16, 16, 32 + 8, 16, 8, 16, 8, 16, 8, 8,
                8, 16 + 16, 8, 8, 16, 16, 16, 16, 32 + 8};

int saints.tempo = 150;

#endif
