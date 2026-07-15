#include<stdio.h>

void main()
{
    int i,j,n,k,m;
    printf("Enter n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(k=0;k<n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<n;i++)
    {
        for(k=0;k<i;k++)
        {
            printf(" ");
        }
        for(j=n-i;j>0;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}
