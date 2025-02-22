#include <stdio.h>


int main()
{
    // non static array, modifiable
    char a[] = "a";
    
    // will be in static memory, cant be modified  (use const)
    // this is actually a string literal
    char *b = "b";

    // addres b will be lower
    printf("a: %p\n", a);
    printf("b: %p\n", b);
    printf("&b:%p\n", &b);

    // causing segmentation fault
    b[0] = 'B';
}