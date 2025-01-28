#include <stdio.h>

int g = 100;
void cg(void) {
    g = g - 50;
}

int main () {
    printf ("g = %d\n", g);
    return 0;
    cg();
    printf ("g = %d\n", g);

}