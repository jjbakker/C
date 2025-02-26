#include <stdio.h>

int main() {

    //char letters[4] = {'a', 'b', 'c', '\0'};
    int letters[4] = {1,2,3,4};
    puts("Array indexing:");
    printf("%d\n", letters[0]);
    printf("%d\n", letters[1]);
    printf("%d\n", letters[2]);
 
    puts("Address arithmetic:");
    printf("%d\n", *letters);
    printf("%d\n", *(letters + 1));
    printf("%d\n", *(letters + 2));

    // size print in long unsigned
    printf("Sizeof letters:%lu\n", sizeof(letters));
    // size of single element
    printf("Sizeof array:%lu\n", sizeof(letters)/sizeof(int));

    
}