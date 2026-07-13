#include<stdio.h>
#include<conio.h>

void main()
{
    int i=2,n,sum=0;
    printf("Enter the range:");
    scanf("%d",&n);

    print:
        sum = sum+i;
        i=i+2;
        if(i<=n){
            goto print;
        }
    printf("The sum of even number is %d:",sum);
    getch();
}
