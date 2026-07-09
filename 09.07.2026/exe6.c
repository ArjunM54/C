#include<stdio.h>
#include<conio.h>

void main()
{
    float a;
    printf("enter the number:");
    scanf("%f",&a);

    if((99<a>1000)||(-99<a>-1000))
    {
        printf("The number is 3 digit number.");
    }
    else
    {
        printf("not 3 digit number.");
    }
}
