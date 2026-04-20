#include <stdio.h>
#include <math.h>

float addition(float *first_number, float *second_number)
{
    return *first_number + *second_number;
}

float subtraction(float *first_number, float *second_number)
{
    return *first_number - *second_number;
}

float multiplication(float *first_number, float *second_number)
{
    return *first_number * *second_number;
}

float division(float *first_number, float *second_number)
{

    if (fabsf(*second_number) < 1e-6f)
    {
        printf("Division by zero prohibited\n");
        return -1.0f;
    }

    return *first_number / *second_number;
}

int main()
{
    float first_num;
    float second_num;
    char operator;

    printf("welcome to the c calculator\n");
    printf("------------ I LOVE MATHS ----------------\n\n");
    printf("----- so i created a calculator that only do the addition --------\n");

   

    printf("type your first number\n");
    scanf("%f", &first_num);

    printf("type your second number\n");
    scanf("%f", &second_num);

    printf("type your operator (+ - * /)");
    scanf(" %c", &operator);

    float result;

    switch (operator)
    {
    case '+':
        result = addition(&first_num, &second_num);
        break;
    case '-':
        result = subtraction(&first_num, &second_num);
        break;
    case '*':
        result = multiplication(&first_num, &second_num);
        break;
    case '/':
        result = division(&first_num, &second_num);
        break;
    default:
        printf("invalid operator, exitting..");
        return 1;
    }

    printf("result: %f\n", result);
    return 0;
}
