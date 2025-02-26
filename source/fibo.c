#include <stdio.h>

int main() {

	int i = 1;
	unsigned long long a = 0;
    unsigned long long b = 1;
	unsigned long long c = 0;

	printf("length = %lu bytes\n", sizeof(a));

	printf("%4d -> %30lld\n", i, b);

	for(i=0;i<=90;i++) {
		c = a + b;
		printf("%4d -> %30lld\n",i + 2, c);
		a = b;
		b = c;
	
	} 
	printf("\n");
	return 0;

}



