#include <stdio.h>
#include <unistd.h>

int main(void) {

    int i;

    for (i=0;i<1000;++i) {

        
        printf("\b|");
        fflush(stdout);
        sleep(0.1);
        printf("\b/");
        fflush(stdout);
        sleep(0.1);
        printf("\b-");
        fflush(stdout);        
        sleep(0.1);
        printf("\b\\");
        fflush(stdout);        
        sleep(0.1);

    }
}