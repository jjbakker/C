#include <stdio.h>
#include <stdlib.h>

char isprime(unsigned long long x) {

    for (int i=2; (i*i)<=x; i++) {
        if((x%i) == 0)   { 
            //retval = 'N';
            return 'N' ; //retval;
        }
    }
    return 'Y';
}


int main(int argc, char *argv[]) {
    int i_min, i_max;

    // not the best solution
    i_min = atoi(argv[1]);
    i_max = atoi(argv[2]);

	for(i_min=5;i_min<=i_max;i_min++) {
		if(isprime(i_min)== 'Y') printf(" %10d",i_min);	
	} 
	printf("\n");
	return 0;

}



