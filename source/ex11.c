#include <stdio.h>


int main(int argc, char* argv[]) {

    int numbers[4] = {0};
    char name[4] = {'a'};

    // print raw values
    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("names: %c, %c, %c, %c\n", name[0], name[1], name[2], name[3] );

    printf("name: %s\n", name);

    //setup numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;    
    numbers[3] = 4;

    // setup characters
    name[0] = 'J';
    name[1] = 'J';
    name[2] = 'B';
    name[3] = '\0' ; //\0';


    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    
    printf("names: %c, %c, %c, %c\n", name[0], name[1], name[2], name[3] );

    printf("name: %s\n", name);

    // alternative way to initialize 
    char *name2  = "Jeeper\n";
    
    printf("name2 = %s", name2);

    return(0);

}


