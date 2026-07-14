#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    int sum=0;
    printf("Ener a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf("%d\n",sum);
    getch();
}
