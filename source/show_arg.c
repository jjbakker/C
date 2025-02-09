#include <stdio.h>
#include <stdlib.h>


// alternative notation: int main(int argc, char **argv) { etc
//                                          -----------
int main(int argc, char *argv[]) {

    while (argc--) {
        printf("%s\n", *argv++);
    }

    exit(EXIT_SUCCESS);
}
