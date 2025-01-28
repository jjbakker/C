#include <stdio.h>

int pr(int p );

int main() {
int p = 10;

pr(p);

printf("orginal p = %d\n",p);

}

int pr(int p) {
    p = 5;
    printf("function p = %d\n", p);
}