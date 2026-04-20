// SWAP
// swap(&a, &b)
/*
EXAMPLE : 
Before: 5 10
After: 10 5
*/ 

/**
 * EXPLANATION :
 * USING BITWISE OPERATION WITH XOR OPERATOR -- cancel-out method
 * AS 0 XOR 0 = 0; 1 XOR 1 = 0; 0 XOR 1 = 1; 1 XOR 0 = 1;
 * 
 * EXAMPLE *
 * a = 5 -> 0101
 * b = 10 -> 1010
 * 
 * 1. a ^= b;
 *   a = a XOR b
 *   a = 0101 XOR 1010 = 1111 -> 15
 * NOW : a = 15, b = 10
 * 
 * 2. b ^= a;
 *   b = b XOR a
 *   b = 1010 XOR 1111 = 0101 -> 5 
 * NOW : a = 15, b = 5
 * 
 * 3. a ^= b;
 *   a = a XOR b
 *   a = 1111 XOR 0101 = 1010 -> 10
 * 
 * FINAL : a = 10, b = 5 (swapped)
 */

#include <stdio.h>

void swap(int *a, int *b) 
{
    if (a == NULL || b == NULL || a == b) {
        printf("please provide non empty values and non equal values");
        return;
    }

    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

int main()
{
    int a = -5;
    int b = 10;

    printf("before swap %d, %d \n" , a, b);
    swap(&a, &b);
    printf("after swap %d, %d", a, b);
}
