#include <time.h>
#include <stdio.h>

int main() {

    time_t biggest = 0x7FFFFFFFFFFFFFFF;
    printf("INT_MAX: %d\n", __INT_MAX__);
    printf("Sizeof time_t: %lu\n", sizeof(time_t));
    printf("biggest = %s\n", asctime(gmtime(&biggest)));
    return 0;
}