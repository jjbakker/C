#include <stdio.h>

// simple function
int add(int a, int b) {
    return a + b;
}

int main() {
    printf("add(3,4): %d\n", add(3,4));

    // create pointer to func add
    int (*plus) (int a, int b) = add;

    // create new function based on typedef
    typedef int (*addition_function) (int, int); 
    printf("plus(3,4): %d\n", plus(3,4));
    
    //use typedef to create function
    addition_function plus_td = add;
    printf("plus_td(3,4): %d\n", plus_td(3,4));

    // when typdeffed, functions can be passed as arguments
    // to other functions
    // eg a specific compare funtion (char or int) in a sort-function 

    return 0;
}