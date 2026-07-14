//Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...]

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,sum=0,ans;
    printf("Enter a Number:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        ans = ans*10+9;
        sum=sum+ans;
    }
    printf("%d",sum);
    getch();
}
