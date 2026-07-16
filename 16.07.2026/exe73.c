#include<stdio.h>

void main()
{
    int i,j,n,s;

    printf("Enter n:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(s=0;s<n-i;s++)
        {
            printf(" ");
        }
        for(j=0;j<2*i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i=n-1;i>0;i--)
    {
        for(s=0;s<n-i;s++)
        {
            printf(" 5");
        }
        for(j=0;j<2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}