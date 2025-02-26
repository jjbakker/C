#include <stdio.h>
#include <stdlib.h>

void change_int_array(int *x, int x_size) {

    for (int i=0;i<x_size; i++) {
        x[i] = i*2;
    }
}

int main() {
    // static declaraiton
    int a[10]; 
    int *ap = (int *)&a;

    //not initialized
//    for (int i=0;i<10;i++) {
//        printf("a[%d] = %d\n", i, a[i]);
//    }

    change_int_array(ap, 10);

    // initialized
    for (int i=0;i<10;i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;

}