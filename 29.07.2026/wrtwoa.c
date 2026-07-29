//with return type and without argument.

#include<stdio.h>
int add()
{
    int x,y;
    x=5;
    y=6;
    return x+y;
}
void main()
{
    printf("%d",add());
}