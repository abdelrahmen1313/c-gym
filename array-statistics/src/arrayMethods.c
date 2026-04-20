#include "arrayMethods.h"
#include <stdio.h>

int arr_max(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int arr_min(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}


int arr_sum(int arr[], int size)
{
  
    int _sum = 0; 

    for (int i = 0; i < size; i++) {
        _sum = _sum + *(arr + i); // arr[i]
    }

    return _sum;
}

float arr_avg(int arr[], int size)
{

    float sum = arr_sum(arr, size);
    return (float)sum / size;

}