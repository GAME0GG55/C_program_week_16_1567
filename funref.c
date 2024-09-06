#include<stdio.h>
void modifyValye(int *a)
{
    *a = 15;
    printf("Address of pointor1 a = %d\n",&a);
}

int tsetFunction()
{
    int x = 10;
    printf("all by value:\n");
    printf("testFunction: before modify funcall y = %d\n", x);

    modifyValye(&x);
    printf("Address of x %d\n", &x);
    printf("testFunction: After modify fcuncall x = %d\n", x);

    return 0;
}