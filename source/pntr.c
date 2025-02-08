#include <stdio.h>

int main (void)
{

// variable + address of variable
int b = 42;
int *a = &b;

printf("b: %d\n", b);
printf("&b: %p\n", &b);
printf("a: %p\n", a);
printf("*a: %d\n", *a);

// we are changing b here:
// dereference of a
*a = 50;

printf("b: %d\n", b);
printf("&b: %p\n", &b);
printf("a: %p\n", a);
printf("*a: %d\n", *a);

return 0;
}