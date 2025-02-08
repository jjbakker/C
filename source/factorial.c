#include <stdio.h>


long fact (long n) {

//    printf("fib = %d\n", n + (n - 1));

    if (n == 0) {

        return 0; // base case
    }

    printf("%d - %d\n",n,  n + fact(n - 1));

}

int main(void) {

    long n = 5;

//    printf("Factorial of %d = %d\n", n, fact(n));

    fact( n );

    return 0;

}