#include <stdio.h>

int main(void) {

    int height, width, length, volume, weight;

    height = 8;
    length = 12;
    width = 10;
    volume  = height * length * width;
    weight =  (volume + 165)  / 166;

    printf("Dimensions: %d x %d x %d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;

}