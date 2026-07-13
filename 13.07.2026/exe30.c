#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    float x;
    printf("Enter the number fro expo:");
    scanf("%d",&n);
    printf("Enter a number for x:");
    scanf("%f",&x);
    int i=1;
    int a=x;

    print:
        printf("%f\n",1/x);
        x = x*a;
        i++;
        if(i<=n)
        {
            goto print;
        }
    getch();
}
