#include <stdio.h>
#include <math.h>

#define EPSILON 1e-6f

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

    if (fabsf(*second_number) < EPSILON)
    {
        printf("Division by zero prohibited\n");
        return nanf("");
    }

    return *first_number / *second_number;
}

int main()
{
    float first_num;
    float second_num;
    char op;

    printf("Welcome to the C calculator\n");
    printf("------------ I LOVE MATHS ----------------\n\n");
    printf("----- so i created a calculator that only does the addition --------\n");

   

    printf("type your first number\n");
    scanf("%f", &first_num);

    printf("type your second number\n");
    scanf("%f", &second_num);

    printf("type your operator (+ - * /)");
    scanf(" %c", &op);

    float result;

    switch (op)
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

    if (isnan(result))
    {
        printf("result: undefined (division by zero)\n");
    }
    else
    {
        printf("result: %f\n", result);
    }
    return 0;
}
