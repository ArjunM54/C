#include<stdio.h>
#include<conio.h>

void main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    switch(a%7)
    {
    case 0:
        printf("It is multiple of 7.");
        break;
    default:
        printf("It is not a multiple of 7.");
    }
    getch();
}
