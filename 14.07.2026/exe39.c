#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,x=1;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x = x*i;
        printf("%d=%d\n",i,x);
    }

    getch();

}
