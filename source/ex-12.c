#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int num;
    FILE *fptr;

    fptr = fopen("program.txt", "w");

    if (fptr == NULL) {
        printf("NULL pointer error\n");
        exit(1);
    }

    printf("Enter number:");
    scanf("%d" ,&num);

  ca

    fclose(fptr);

    return(0);

}