#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    int x;
    printf("Ener a exponantial:");
    scanf("%d",&n);
    printf("Enter a number;");
    scanf("%d",&x);

    int e=x;
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",e);
        e = e*x;
    }
    getch();
}
