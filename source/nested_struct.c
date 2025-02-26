#include <stdio.h>
#include <stdlib.h>
// different notation
// pixel and screen are defined here
#include "jj_pixel.h"


// function to create new screen, returns pointer
screen *screen_new(int width, int height){
    // creation of nested structs
    // screen 
    screen *s = malloc(sizeof(screen));
    s->width = width;
    s->height =  height;
    // pixels live in the screen
    s->data = malloc(width * height * sizeof(pixel));
    // initialize data
    for(int i=0;i<s->width;i++){
        for (int j=0;j<s->height;j++) {
            // get the actual addresses of data elements
            int index = i * s->width+j;
            s->data[index].r = i;
            s->data[index].g = j;
            s->data[index].b = i+j;
        }
    }
    return s;
};

// function to cleanup
void screen_free(screen *s) {
    free(s->data);
    free(s);
}

// print all data values
void screen_print(screen *s) {
for(int i=0;i<s->width;i++){
    for (int j=0;j<s->height;j++) {
        int index = i * s->width+j;
        printf("[%d %d %2d]  ",
                 s->data[index].r,
                 s->data[index].g,
                 s->data[index].b
        );
    }
    printf("\n");
}

}

int main() {
    screen *s_new = screen_new(10,10);
    screen_print(s_new);
    screen_free(s_new);
    return 0;
}