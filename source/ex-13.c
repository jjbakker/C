#include <stdio.h>
#include <stdlib.h> // for exit 

int main() 
{
    // declaratie van filepointer
    // typedef ui stdio.h
    FILE *fp;
    int i;
    // initialize fp (pointer)
    fp = fopen("num.txt","w");
    // check for error
    if (fp == NULL) {
        printf("Error opening file");
        exit(1);
    }
    for (i = 1 ; i <= 10; ++i) {
        // writing to file fp
        fprintf(fp, "%2d\n", i);
    }

    fclose(fp);
    return(0);
}