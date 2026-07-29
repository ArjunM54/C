// 1.Write a program in C to swap two numbers using a function.
#include<stdio.h>

int swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
    return 0;
}
void main()
{
    int x=5;
    int y=10;
    swap(&x,&y);
    printf("x: %d, y: %d",x,y);
}