// declare and typedef struct

typedef struct {
    int r;
    int g;
    int b;
} pixel;

typedef struct {
    int width;
    int height;
    pixel *data;
} screen;


