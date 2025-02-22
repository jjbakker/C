#include <stdio.h>

int main() 
{
    char a_char = 'z';

    // Declare and initialize pointer to a_char
    char *a_char_ptr = &a_char;

    // show address in pointer
    printf("Address in a_char_ptr: %p\n", a_char_ptr);

    // show value in address pointed to
    printf("*a_char_ptr: %c\n", *a_char_ptr);

    // write value in address pointed to
    *a_char_ptr = 'y';
    printf("a_char: %c\n", a_char);
    

}