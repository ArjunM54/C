//Write a C program to find sum of series 1 + 1/(2*2) + 1/(3*3) + 1/(4*4) + ….. + 1/(n*n)

#include<stdio.h>
#include<conio.h>

void main()
{
    float n,i;
    float sum=0;

    printf("Enter the exponantial range:");
    scanf("%f",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+(1.0/(i*i));
    }
    printf("\nsum is %f",sum);
}

