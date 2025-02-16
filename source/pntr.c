#include <stdio.h>

int main (void)
{

// variables + pointer declaration
//int t;   
int b;   // variable int
int* a;  // memory pointer size int
// alternatives are
// int *a;
// or
// int * a;


//t = &b;

b = 42; // assignment
a = &b;  // pointer a gets address of b



printf("variable b             b: %d\n", b);
printf("address variable b =  &b: %p\n", &b);
printf("a = &b, address b  is stored in pointer a:\n");
printf("a = &b                 a: %p\n", a);
printf("value = pointer       *a: %d\n", *a);

printf("===================================\n");
printf("*a = value at pointer a\n");
printf("&a = memory address of variable a\n");
printf("===================================\n");



printf("Declaration int *a = &b; gives:\n");
printf("a = pointer, gets the address of b, resulting in:\n");
printf("address = variable a    : %p\n", a);
printf("value = pointer *a      : %d\n", *a);

// we are changing b here:
// dereference of a
*a = 50;

printf("b: %d\n", b);
printf("&b: %p\n", &b);
printf("a: %p\n", a);
printf("*a: %d\n", *a);

return 0;
}