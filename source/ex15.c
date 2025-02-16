#include <stdio.h>

int main(int argc, char *argv[]) {

    int ages[] = {23, 43, 12, 89, 2};
    char *names[] = {"Arie", "Gert", "Frits", "Kees", "Robert"};

    printf("Size of int = %ld\n", sizeof(int));

    // safely get the size of ages
    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    // first way using indexes
    for (i=0;i< count;i++){
        printf("%s has age of %d\n", names[i], ages[i] );
    }

    printf("--------------------\n");

    // setup the pointers to the start of the array
    int *cur_age = ages;
    char **cur_name = names;

    //second way using pointers
    for (i=0; i<count;i++) {
        printf("%s is %d years old\n", *(cur_name + i), *(cur_age + i));

    }

    printf("--------------------\n");

    // third way, pointers are just arrays
    for (i=0;i<count;i++) {
        printf("%s is %d years alive\n", cur_name[i], cur_age[i]);
    }

    return 0;

}