#ifndef INTERFACE_H
#define INTERFACE_H

struct Tune {
    int count;
    char* notes;
    int beats[255];
    int tempo;
};
#endif
