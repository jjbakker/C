#include <stdio.h>
#include <stdlib.h>

char isprime(unsigned long long x) {
    int i;
    //int retval = '?';
    for (i=2; (i*i)<x; i++) {
        if((x%i) == 0)   { 
            //retval = 'N';
            return 'N' ; //retval;
        }
    }
    return 'Y';
}


int main() {

	int i = 1;
	unsigned long long a = 0;
    unsigned long long b = 1;
	unsigned long long c = 0;

	printf("length = %lu bytes\n", sizeof(a));

	printf("%4d -> %30lld\n", i, b);

	for(i=0;i<=50;i++) {
		c = a + b;
		printf("%4d -> %30lld - %c\n",i + 2, c, isprime(c));
		a = b;
		b = c;
	
	} 
	printf("\n");
	return 0;

}



