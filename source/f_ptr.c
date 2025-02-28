#include <stdio.h>

int add(int a, int b) {
    return(a+b);
}

int mul(int a, int b) {
    return a*b;
}

// generic function for printing calculation
// argument for function is
//        <=================>
int calc(int (*op)(int, int), int a, int b) {
    printf("in calc: %d\n", op(a,b));
    return op(a,b);
}

int main(void) {
     
    // create pointers to functions
    int (*ptr_add) (int a,  int b) = add;
    int (*ptr_mul) (int a,  int b) = mul;

    // calling functions by their pointer
    printf("f call by ptr_add(3,4): %d\n", ptr_add(3,4));
    printf("f call by ptr_mul(3,4): %d\n", ptr_mul(3,4));

    // pass function as arguments to calc
    calc(ptr_add,4, 5);
    calc(ptr_mul,6, 5);

    // print return value from calc
    printf("calc(ptr_add,3,4: %d\n", calc(ptr_add,3,4));
    printf("calc(ptr_mul,3,4: %d\n", calc(ptr_mul,3,4));

}