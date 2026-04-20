#include <stdio.h>

int addition(int *first_number, int *second_number)
{
    return *first_number + *second_number;
}

int substraction(int *first_number, int *second_number)
{
    return *first_number - *second_number;
}

int multiplication(int *first_number, int *second_number)
{
    return *first_number * *second_number;
}

int division(int *first_number, int *second_number)
{

    if (*second_number == 0)
    {
        printf("Division by zero prohibited\n");
        return -1;
    }

    return *first_number / *second_number;
}

int main()
{
    int first_num;
    int second_num;
    char operator;

    printf("welcome to the c calculator\n");
    printf("------------ I LOVE MATHS ----------------\n\n");
    printf("----- so i created a calculator that only do the addition --------\n");

   

    printf("type your first number\n");
    scanf("%d", &first_num);

    printf("type your second number\n");
    scanf("%d", &second_num);

    printf("type your operator (+ - * /)");
    scanf(" %c", &operator);

    int result;

    switch (operator)
    {
    case '+':
        result = addition(&first_num, &second_num);
        break;
    case '-':
        result = substraction(&first_num, &second_num);
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

    printf("result: %d\n", result);
    return 0;
}