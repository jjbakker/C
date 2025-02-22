
#include <stdio.h>


int counter();

int main()
{
    printf("%d\n", counter());
    printf("%d\n", counter());
    printf("%d\n", counter());    
}


int counter() {
    
    // refers to static memory (lowest in memory)
    // initialized at program start (before main)
    // no longer bound to function 
    static int count = 0;
    return ++count;
}