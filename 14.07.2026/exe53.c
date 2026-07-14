//Write a program in C to display the number in reverse order

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,reversed,digit;
    printf("Enter the number:");
    scanf("%d",&n);
    int count=0;
    int x=n;
    while(n>0)
    {
        n/=10;
        count++;
    }

    for(i=0;i<count;i++)
    {
        digit = x%10;
        reversed = reversed*10+digit;
        x = x/10;
    }
    printf("%d",reversed);
}
