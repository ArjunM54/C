#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    printf("Ener a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2)
    {
        printf("%d\n",i);
    }
    getch();
}
