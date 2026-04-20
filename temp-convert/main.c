#include <stdio.h>
#include <ctype.h> 
#include "converters.h"

int main() {

    float degree;
    char unit;

    printf("Welcome to temperature converter utility\n");

    printf("Type your actual degree\n");
    scanf("%f", &degree);

    printf("Type your actual unit (C for Celcius, F for fahreneit)\n");
    scanf(" %c", &unit);
    if (toupper(unit) != 'C' && toupper(unit) != 'F') {
        printf("Please type a valid unit (C or F)");
        return -1;
    }

   /* printf("the actual degree is : %f\n", degree);
    printf("the actual unit is : %c\n", toupper(unit));*/

    if (toupper(unit) == 'C') {
        float result = celsius_to_fahrenheit(degree);
        printf("converted value in F: %.2f\n", result);
    } else {
        float result = fahrenheit_to_celsius(degree);
        printf("converted value in C: %.2f\n", result);
    }

    return 0;

}