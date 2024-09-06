#include<stdio.h>
int testPointer2()
{
    int x =10;
    float y = 1.3f;
    char i = 'p';  

    int *ptr_x = &x;
    float *ptr_y = &y;
    char *ptr_i = &i;

    printf("value of x = %d\n", *ptr_x);
    printf("value of y = %d\n", *ptr_y);
    printf("value of i = %d\n", *ptr_i);

    printf("Size of integer pointor %lu\n", sizeof (*ptr_x));
    printf("Size of float pointor %lu\n", sizeof (*ptr_y));
    printf("Size of char pointor %lu\n", sizeof (*ptr_i));

    return 0;
}