#include <stdio.h>
void rec(int teller) {
    if(teller>0) { 
        printf("%d\n", teller); 
        rec(teller - 1);
    }
}

int main() {
   rec(10);
   return(0);
}