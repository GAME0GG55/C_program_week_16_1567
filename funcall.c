#include<stdio.h>
void modifyvalue(int *a)
{
    printf("Address of pointor a = %d\n",&a);
    *a = 15;
}

int tsetFunction()
{
    int x = 10;
    printf("all by value:\n");
    printf("testFunction: before modify funcall x = %d\n", x);
    printf("testFunction: before modify funcall x = %d\n", &x);

    printf("Address of x %d\n", &x);
    modifyvalue(&x);
    printf("testFunction: After modify fcuncall x = %d\n", x);

    return 0;
}