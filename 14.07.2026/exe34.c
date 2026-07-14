#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    printf("Enter an year:");
    scanf("%d",&n);
    if(((n%4==0)&&(n%100!=0))||(n%400==0))
    {
        printf("Leap year");
    }
    else
    {
        printf("Not Leap year");
    }
    getch();
}
