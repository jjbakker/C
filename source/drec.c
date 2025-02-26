
#include <stdio.h>
void directRecursion(int n) {
if (n > 0) {
printf("%d ", n);
 directRecursion(n - 1); // Recursive call
 }
}
int main() {
int num = 5;
printf("Direct Recursion: ");
directRecursion(num);
return 0;
}