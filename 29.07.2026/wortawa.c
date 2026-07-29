//without return type and with argument.

#include<stdio.h>

void add(int x,int y)
{
    int Sum = x+y;
    printf("Sum: %d",Sum);
}
void main()
{
    int x=5;
    int y=10;
    add(x,y);
}