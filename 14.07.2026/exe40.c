#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n=10,x;
    printf("Table:");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        printf("%d*%d=%d\n",i,x,i*x);
    }
    getch();

}
