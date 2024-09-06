#include<funref.c>
int testPointer()
{
    int x = 10;
    int *ptr;
    printf("value of variable x = %d\n", x);
    printf("Address of variable x = %d\n", &x);
    ptr = &x;
    printf("Address of pointer ptr = %d\n", &ptr);
    printf("value of pointer x = %d\n", *ptr);
    *ptr = 20;
    printf("value of pointer x = %d\n", *ptr);

    return 0;
}