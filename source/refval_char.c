#include <stdio.h>

int pr(char p[] );

int main() {
char p[10];
p[0] = 'E';

pr(p);

printf("orginal p = %c\n",p[0]);

}

int pr(char p[]) {
    p[0] = 'A';
    printf("function p = %c\n", p[0]);
    return 0;
}