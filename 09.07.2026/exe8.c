#include<stdio.h>
#include<conio.h>

void main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);

    if(a%32==0 && a%11==0)
    {
        printf("multiple by both");
    }
    else
    {
        printf("not multiple by both");
    }
}
