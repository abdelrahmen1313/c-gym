/*
Array Statistics Exercice
Goal : Arrays
Input : 5 numbers;
Calculate :
  sum, average, mean, max, min
*/

#include <stdio.h>
#include <stdlib.h> // for malloc, calloc, free, rand
#include <time.h>
#include "arrayMethods.h"


int main()
{
    int n;
    printf("Enter array length: ");
    scanf("%d", &n);

    // allocate memory dynamically
    int *arr = malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // seed random number generator
    srand(time(NULL));

    // fill array with random values
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;   // random number between 0 and 99
    }

    // print array
    printf("Random values: [ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");

    printf("---------------------------");

    int sum = arr_sum(arr, n);
    printf("array sum : %d\n" , sum);
    printf("---------------------------");

    float avg = arr_avg(arr, n);
    printf("array average : %.2f\n" , avg);

    printf("---------------------------");

    int max = arr_max(arr, n);
    printf("array max : %d\n" , max);

    
    printf("---------------------------");

    int min = arr_min(arr, n);
    printf("array min : %d\n" , min);

    // free memory
    free(arr);

    return 0;
}