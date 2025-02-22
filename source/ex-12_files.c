#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int num;
    FILE *fptr;

    if (fptr == NULL) {
        printf("NULL pointer error\n");
        exit(1);
    }

    printf("Enter number:");
    scanf("%d" ,&num);

    fprintf(fptr, "%d", num);

    fclose(fptr);

    return(0);

}