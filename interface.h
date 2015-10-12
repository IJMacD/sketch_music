#ifndef interface
#define interface

struct Music {
    int length;
    char notes[];
    int beats[];
    int tempo;
};
#endif
