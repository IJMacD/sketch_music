#ifndef SAINTS_H
#define SAINTS_H

int saints_length = 11 + 12 + 9; // the number of notes

char saints_notes[] = "GBcdGBcdGBc" "dBGBABAGGBdd" "dcBcdBGAG";

int saints_beats[] = { 8, 8, 8, 32 + 8, 8, 8, 8, 32 + 8, 8, 8, 8,
             16, 16, 16, 16, 32 + 8, 16, 8, 16, 8, 16, 8, 8,
             8, 16 + 16, 8, 8, 16, 16, 16, 16, 32 + 8};
  
int saints_tempo = 150;

#endif
