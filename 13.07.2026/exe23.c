#include<stdio.h>
#include<conio.h>

void main()
{
    int i=1,n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Odd numbers.\n");
    print:
        printf("%d\n",i);
        i=i+2;
        if(i<=n)
        {
            goto print;
        }
    getch();
}
