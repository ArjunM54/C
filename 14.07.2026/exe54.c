//Write a C program to find sum of series 1+x+x2+x3……+xn

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,n,i,j,x=1,sum=0;
    printf("Enter the number:");
    scanf("%d",&a);

    printf("Enter the exponantial range");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        x=x*a;
        printf("%d ",x);
        sum=sum+x;
    }
    printf("\nsum is %d",sum+1);
}
