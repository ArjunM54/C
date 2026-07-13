#include<stdio.h>
#include<conio.h>

void main()
{
    int i=1,n,sum = 1;
    printf("Enter a number:");
    scanf("%d",&n);

    print:
        sum = sum*i;
        i++;
        if(i<=n)
        {
            goto print;
        }
         printf("The sum is: %d",sum);
    getch();
}
