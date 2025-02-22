#include <stdio.h>
#include <stdint.h>

int64_t sum(int64_t *xs, size_t length);

int main() 
{
    // define and inititalize array
    int64_t nums[] = {10,20,30,40};

    // size_t will hold nr of elements in the array
    size_t nums_length = sizeof(nums) / sizeof(int64_t);
    
    printf("sizeof nums:%ld\n", sizeof(nums));
    printf("sizeof int64_t:%ld\n", sizeof(int64_t));
 
    int64_t total = sum(nums, nums_length);
    printf("%ld\n", total);
    
}

int64_t sum(int64_t *xs, size_t length) 
{

    int64_t result = 0;

    // iteration through array to sum every value 
    while(length-- > 0) {
        result += *xs;
        xs++;
    }
    return result;

}

