#include <stdio.h>

int main()
{
    int i;
    //char c;
    i=33;
    do
    {   //c = (char)i;
        printf("%d %c \n",i,i);
        i++;
    }
    while(i<=126);
    return 0;
}