#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("Sum of two numbers:\n");
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    c = a+b;
    printf("The sum is: %d\n",c);

    printf("Area of triangle:\n");
    d = (a*b)/2;
    printf("The area of the triangle is: %d\n", d);

    printf("Circumfrence of the circle:\n");
    e = 2*3.14f*d;
    printf("The circumfrence is: %d", e);
    return 0;
}
