#include <stdio.h>

int g = 100;
int cg(int p) {
    p = p - 50;
    return p;
}

int main () {
    printf (" g = %d\n", g);
    printf("f:g = %d\n", cg(g) );
    printf (" g = %d\n", g);
    return 0;
}