#include <stdio.h>

// for easier string manipulation
#include <string.h>


//condensed function to get string length
//takes string pointer as argument
int my_strlen(char *s) {
    //define pointer for subtraction end - begin
    const char *b = s;
    while(*s) {
        s++;
    }
    return s - b;   
}



int main(int argc, char *argv[]) {
// generic intro
printf("Running \"%s\", compiled on %s - %s\n", argv[0], __DATE__,__TIME__);



    // string declaration as array
    char s1[] = "abc0123";
    printf("%s\n", s1);
    // add \0
    char s2[] = {'d', 'e', 'f', '\0'};
    printf("%s\n", s2);

    char s3[4];  
    char *sp3;   
    // both vars needs to be initialized
    s3[0] = 'f';
    s3[1] = 'f';
    s3[2] = 'f';
    s3[3] = '\0';
    
    sp3 = &s3[0];

    //s3[] = "efg";
    //*sp3 = "efg";

    // both modified s1 and s2 are array names, sp = pointer
    s1[0] = 'z';
    s2[0] = 'y';
    s3[0] = 'x';
    *sp3  = 'w';

    printf("%s\n", s1);
    printf("%s\n", s2);

    printf("%s\n", s3);
    printf("%s\n", sp3);

    sp3[0] = 'm'; 
    printf("%s\n", sp3);

    puts("Using puts()");

    puts(s1);
    puts(s2);
    puts(s3);
    puts(sp3);

    puts("Examples from string,h:");
    strcpy(s1,"aaa");
    strcpy(s2,s1);
    printf("s1:%s\n", s1);
    printf("s2:%s\n", s2);

    printf("my_strlen(s1): %d\n", my_strlen(s1));

    printf("sizeoff(int): %lu\n", sizeof(int));
    printf("sizeoff(size_t): %lu\n", sizeof(size_t));

    return 0;
}