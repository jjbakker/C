#include <stdio.h>

// typedef
// function pairfunction taking 2 ints
typedef int (*pair_function) (int, int);

int add( int a, int  b) {
    return(a + b);
}

int sub(int a, int b) {
    return (a -b);
}

int mul(int a, int b) {
    return a * b;
}

// this function will execute 'pair function'
// based on argument
void blend (int *a, int *b, int len, pair_function f)
{
    for(int i=0; i<len;i++){
        printf("%d: %d\n,", i, f(a[i], b[i]) );
    }
};

int main() {
   
    int a[] = {1,2,3,4,5};
    int b[] = {5,6,7,8,9};

    
    // call blend with different parameters
    printf("add:\n");
    blend(a,b,5,add);
    printf("sub:\n");
    blend(a,b,5,sub);
    printf("mul:\n");
    blend(a,b,5,mul);

    return 0;
}