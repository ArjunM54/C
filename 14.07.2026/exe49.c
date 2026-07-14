//Write a program in C to display the n terms of square natural number and their sum.
#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,x,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        x=i*i;
        printf("%d  ",x);
        sum=sum+x;
    }
    printf("\nThe sum is %d",sum);
    getch();
}
