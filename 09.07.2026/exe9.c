#include<stdio.h>
#include<conio.h>

void main()
{
    int a;
    printf("Enter the units:");
    scanf("%d",&a);

    if(0<a<=200)
    {
        printf("the amount is:%d",a*3);
    }
    else if(201<=a<=500)
    {
        printf("the amount is:%d",a*4);
    }
    else if(501<=a<=1000)
    {
        printf("the amount is:%d",a*8);
    }
    else
    {
        printf("the amount is:%d",a*10);
    }
}
