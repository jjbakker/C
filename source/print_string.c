#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

// carriage return
const char back[] = "\r";

int slaap( int p )
{
  int i;
  for ( i = 0 ; i < p ; i++ ) usleep(10000);
  return 0;
}

int get_rnd (int min, int max, unsigned int s) {
    
    srand(s);
    int rd_num = rand() % (max - min) + 15;
    return rd_num;
}

int prnt (char s[]) {
    printf("%s", back);
    printf("%s", s);
    fflush(stdout);
    slaap(3);
    return 0; 
}


int main() {

    char greet[]     = "               ";
    char numbers[]   = " 01234 NEW 0123";
    char greet_end[] = " ... NOTHING...";
    int  r           = 12;

    // reset seed
    //srand(time(NULL));
    // get the first seed
    int seed = rand();

    //To hide the cursor: 
    printf("\e[?25l");
 
    prnt(numbers);
    
    prnt(greet);
  
    prnt(greet_end);

    //To re-enable the cursor: 
    printf("\e[?25h");
    printf("\n\n\n");

 
    //printf("%d", rnd);

    // Loop that will print the count random numbers
    for ( int i = 0; i < 10; i++){
      for (int c = 1; c < 14; c++) {
          //get_rnd(15,120,seed + i + c);
          //greet[c] = get_rnd(15,120,seed + i + c);
          if (c = 1 && greet[c] != 'A') {
            greet[c] = rand() % 110 + 20;
          }
  
  //        printf("%d %c\n" , n);
      } 
      prnt(greet);

    }

    return 0;

}