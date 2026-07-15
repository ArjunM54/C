//Write a program in C to find the sum of the series [ 1-X2/2!+X4/4!- .........].

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,n;
    float term,x,sum=1.0;
    printf("Enter the range:");
    scanf("%d",&n);

    printf("Enter a number for x:");
    scanf("%f",&x);

    for(i=1;i<n;i++)
    {
        term=1;
        for(j=1;j<=2*i;j++)

            term =term*x;

        for(j=1;j<=2*i;j++)

            term=term/j;

        if(i%2==1)
            sum=sum-term;
        else
            sum=sum+term;

    }
    printf("Sum of the series = %.6f\n", sum);

    getch();
}

