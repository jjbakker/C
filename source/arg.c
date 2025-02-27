#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <errno.h>

int main( int argc, char **argv) {

    // check nr of arguments
    if (argc < 2) {
        fprintf(stderr, "Usage: %s str [base]\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    // conversion of argv[] and check
    char *e = NULL;
    long arg1 = strtol(argv[1], &e, 16);
    // check conversion
    // last character should reflect end of string
    // errno should not be set
    if(*e != 0 || errno) {
        if(errno == EINVAL) {
            printf("Conversion failed");
            exit(EXIT_FAILURE);
        }  else if (errno == ERANGE) {
            printf("Conversion out of range");
            exit(EXIT_FAILURE);
        }
        printf("Error occurred at %s\n", e);
        exit (EXIT_FAILURE);
    }

    // show args
    printf("argc: %d\n",argc); 
    for(int i=0;i<argc;i++) {
        printf("arg[%d]: \"%s\"\n", i, argv[i]);
    }

    printf("arg1 after strtol: %ld\n", arg1);




    return 0;
}