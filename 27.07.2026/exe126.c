#include<stdio.h>
#include<conio.h>

void main()
{
    int a;
    int *ptr;
    a=10;
    ptr = &a;
    int **q;
    q = &ptr;
    a++;
    ptr++;
    ptr = &a;
    printf("Value of a: %d\n",a);
    printf("Address of the a: %d\n",&a);
    printf("\n");

    printf("Value of the ptr: %d\n",*ptr);
    printf("value stores in the ptr(a): %d\n",ptr);
    printf("Address of the ptr: %d\n",&ptr);
    printf("\n");

    printf("Value of q: %d\n",**q);
    printf("value of q(ptr): %d\n",q);
    printf("Address of q: %d\n",&q);
    printf("\n");
    getch();
}