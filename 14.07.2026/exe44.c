#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    float x;
    printf("Ener a exponantial:");
    scanf("%d",&n);
    printf("Enter a number;");
    scanf("%f",&x);

    float e=x;
    for(int i=1;i<=n;i++)
    {
        printf("%f\n",1/e);
        e = e*x;
    }
    getch();
}

