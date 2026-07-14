#include<stdio.h>
#include<conio.h>

void main()
{
    int n,sum;
    printf("Ener a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
        printf("%d=%d\n",i,sum);
    }
    getch();
}

