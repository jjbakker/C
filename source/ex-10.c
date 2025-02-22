#include <stdio.h>
#include <stdlib.h>

#define ALPHABET_LEN 26


char *string_malloc(size_t size);
void fill_lowercase(char *str, size_t len);



int main () 
{
    char *str = string_malloc(ALPHABET_LEN + 1);
    fill_lowercase(str, ALPHABET_LEN + 1);
    printf("%s\n", str); 

    // free memory
    free(str);
    // get rid of the pointer
    str = NULL;
    // this prevents reuse of pointer, might get garbage (no segmentation fault)

}

char *string_malloc(size_t size)
{
    // get (pointer) to new memory
    //
    char *str = malloc(size);
    if(str == NULL) {
        fprintf(stderr, "Out of memory");
        exit(EXIT_FAILURE); 
    }

    // initialize
    for (size_t i=0; i < size; ++i) {
        str[i] = '/0';
    }

    return str;
}


void fill_lowercase(char *str, size_t len)
{
    if (len > 26){
        int i = 27;
    }
    for(size_t i = 0; i < len - 1; ++i) {
        str[i] = 'a' + i; // gets tthe lowercase ascii value 

    }
    str[len - 1] = '\0';
}