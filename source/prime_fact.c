#include <stdio.h>


int main(void) {

    long int d, s, e , start = 0, num_primes = 0;

    printf("Enter start: " );
    scanf("%d", &s);
    printf("Enter end: " );
    scanf("%d", &e);    

    start = s;

// start to end
   for (;s <= e; s++) {

//        printf("testing %d\n",  s); 

//      test deelbaar door 2 tot wortel s

        for (d = 2; d*d <= s ; d++) {

//                printf("...deelbaar: %d\n",  d); 

                if (s % d == 0 ) {

//                    printf("%d is divisible by %d: %d \\ %d = %d\n", s,d, s, d, (s / d)); 

                    break;
                }  

                else if ( (d + 1) * (d + 1) > s ) {

//                     printf("%d is prime\n", s);

                    num_primes++ ;

                    if ((num_primes % 6) == 0) printf("\n");

                     printf("%8d\t", s);
                }

        }


   }

    printf("\nNumber of primes found in range %d - %d  = %d\n", start, e, num_primes);

    return 0;

}