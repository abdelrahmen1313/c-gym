#include <stdio.h>

int main()
{
    int x = 10;

    char name[] = "Alice";

    printf("name value: %s\n", name);
    printf("name Address: %p\n", &name);

    //printf("fourth : %c\n", name[3]);
    

    printf("X Value: %d\n", x);
    printf("X Address: %p\n", &x);
}