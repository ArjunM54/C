#include<stdio.h>
#include<conio.h>

void main()
{
    int i,sum=0,digit;
    int n;
    printf("Enter a five digit number:");
    scanf("%d",&n);
    while(0<n)
    {
        digit = n%10;
        sum = sum+digit;
        n = n / 10;

    }
    printf("%d",sum);
}
