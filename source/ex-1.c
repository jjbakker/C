#include <stdio.h>
#include <stdlib.h>


// function declaration
// // function
int biggest(int x, int y) {

    if (x>y) {
        return(x);
    }    
    else return(y);
    }

// pointer to function
int (*ptrbiggest)(int a, int b) = biggest;


int main(int argc, char *argv[]) {

    int a = 3;
    int b = 5;

    // call to pointer and function the same
    printf("Biggest nr with pointer = %d\n", (*ptrbiggest)(a,b));
    printf("Biggest nr with function name = %d\n", biggest(a,b));

    return(0);
}


