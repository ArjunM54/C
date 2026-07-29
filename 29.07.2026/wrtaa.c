//with return type and argument.

#include<stdio.h>
int add(int x, int y)
{
    return x+y;
}
void main()
{
    int x,y;
    x=10;
    y=10;
    printf("%d",add(x,y));
}