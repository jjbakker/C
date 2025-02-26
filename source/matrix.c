#include <stdio.h>
#include <stdlib.h>

// function returns pointer to pointers 
int ** create_int_matrix(int nrows, int ncols)
{
    // allocate for pointers
    int **m = malloc(nrows * sizeof(int *));
    // for all rows we create columns    
    for (int i=0; i <= nrows; i++) {
        // allicate for rows
        m[i] = malloc(ncols * sizeof(int));
    }
    return m;

}


// free should be here

void print_matrix(int **m , int nrows, int ncols) {
    for (int i=0;i<nrows;i++) {
        for (int j=0; j<ncols; j++) {
            printf(" %2d", m[i][j]);
        }
    printf("\n");
    }
}



int  main() {

    int nrows = 10;
    int ncols = 10;

    // call to create matrix
    int** m = create_int_matrix(nrows,ncols);

    // populate matrix
    for (int i=0;i<nrows;i++) {
        for (int j=0; j<ncols; j++) {
            m[i][j] = i * j;
        }
    }

    print_matrix(m, nrows, ncols);

    return 0;
}