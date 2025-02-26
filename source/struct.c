#include <stdio.h>
#include <stdlib.h>
// different notation
#include "jj_pixel.h"

// copy if p
void print_pixel(pixel x) {
    printf("%d %d %d\n", x.r, x.g, x.b);
}

// using pointer instead
void redder(pixel *pp) {
    pp->r += 10;
}

int main() {

    pixel p = {0 ,0 ,0};

    printf("sizeoff pixel p: %lu\n", sizeof(pixel));

    print_pixel(p);

    redder(&p);

    print_pixel(p);

    // array: note that indexing implies dereferencing
    pixel *screen = malloc(1000 * sizeof(pixel));
    screen[25].r = 155;

    // calling by pointer / address
    redder(&screen[25]);

    // callng by variable (new copy on the stack)
    print_pixel(screen[25]);

    return 0;
}