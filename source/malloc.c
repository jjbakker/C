#include <stdio.h>
#include <stdlib.h>

void print_array(int *x, int x_size) {

    printf("printing in function:\n");
    for (int i=0;i<x_size; i++) {
        printf("x[%d] = %d\n", i, x[i]);
    }
    printf("end\n");
}


int main() {

    // we want 10 integers in an arrau
    int size_a = 10;
    int *a = NULL;

    //memory allocation returns pointer
    a = malloc(size_a * sizeof(int));
    // allways test if malloc was succesfull
    if (a == NULL) {
        fprintf(stderr, "Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    for (int i=0;i<size_a;i++) {
        a[i] = i*2;
        printf("a[%d] = %d\n", i, a[i]);
    }

    print_array(a, size_a);

    // change size with realloc
    size_a *= 2;
    
    int *a_tmp = realloc(a, size_a * sizeof(int));
    if (a_tmp == NULL) {
        fprintf(stderr, "Reallocation failed");
        exit(EXIT_FAILURE);
    }

    a = a_tmp;

    for (int i=0;i<size_a;i++) {
        a[i] = i*2;
    }

    print_array(a, size_a);


    free(a);

}