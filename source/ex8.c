#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int i = 1;
    char *a = argv[1];

    if (argc != 2) {
        printf("Error: usage: ex8 <nr>\n");
            exit(1);
    } else { 
        while( i <= atoi(a)) { 
        printf("%d\n",i);
        i++;
        }
    }    

    return(0);

}