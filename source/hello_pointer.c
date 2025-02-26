#include <stdio.h>
#include <stdlib.h>

int main() {
    // declare variable
    int a = 101;

    // declaration of pointer variable
    int *ap = &a;

    // declaration of pointer to pointer variable
    int **app = &ap;

    printf("values\n");

    printf("a  : %d\n",a);
    printf("ap : %p\n",ap);
    printf("app: %p\n",app);

    printf("dereferenced\n");

    printf("a      : %d\n",a);
    printf("*ap    : %d\n",*ap);
    printf("**app  : %d\n",**app);

    printf("*&*&*ap: %d\n",*&*&*ap);

    printf("dynamic array (heap)\n");

    int *b = malloc(3 * sizeof(int));
    printf("b      : %p value = address pointing to heap (low value)\n",b);
    printf("&b     : %p address = address stored in stack (high value)\n",&b);

    b[0] = 99;
    b[1] = 88;
    printf("&b &b[0] b[0]: %p - %p - %d\n",&b , &b[0], b[0]);
    printf("&b &b[1] b[1]: %p - %p - %d\n",&b , &b[1], b[1]);

    printf("Deferencing *b is the same as indexing b[0]\n");
    printf("&b[0] *b     b[0]: %p - %d - %d\n",&b[0] , *b, b[0]);
    printf("&b[1] *(b+1) b[1]: %p - %d - %d\n",&b[1] , *(b+1), b[1]);


}
