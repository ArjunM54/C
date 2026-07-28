#include<stdio.h>

void main()
{
    int a;
    int *ptr;
    a=10;
    ptr = &a;
    printf("Value of a: %d\n",a);
    printf("Address stores in the ptr: %d\n",ptr);
    printf("Address of the a: %d\n",&a);
    printf("Address of the ptr: %d\n",&ptr);
    printf("Value of the ptr: %d\n",*ptr);
}