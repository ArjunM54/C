#include<stdio.h>
#include<conio.h>

void main()
{
    int i=1,n;
    printf("Enter a number:");
    scanf("%d",&n);

    print:
        int sum = sum+i;
        i++;
        if(i<=n)
        {
            goto print;
        }
         printf("The sum is: %d",sum);
    getch();
}
