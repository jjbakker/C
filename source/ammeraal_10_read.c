#include <stdio.h>
#include <stdlib.h> // for exit 

int main() 
{
    // declaratie van filepointer
    // typedef ui stdio.h
    FILE *fp;
    int som = 0, x;
    // initialize fp (pointer)
    fp = fopen("num.txt","r");
    // check for error
    if (fp == NULL) {
        printf("Error opening file");
        exit(1);
    }
    while (fscanf(fp, "%d", &x) == 1) 
        {   printf("%d\n", x);
            som += x;
        }
    
    printf("De som is: %d\n", som);
    
    if (!feof(fp)) 
       { printf("Invalid character\n");}
 
    fclose(fp);
    return(0);
}