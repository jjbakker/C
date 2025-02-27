#include <stdio.h>
#include <time.h>

int main(void) {
  time_t x;

  x = (time_t)((1U << 31) - 1);
  printf("%s\n", ctime(&x));
  x += 1;
  printf("%s\n", ctime(&x));
  x += 1;
  printf("%s\n", ctime(&x));

  return 0;
}