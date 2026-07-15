#include<stdio.h>

void main()
{
    int i,j,n,k,m;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=i;k<n;k++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(m=i-1;m>=1;m--)
            printf("%d ",m);
        printf("\n");
    }
    int y=n;
    for(i=1;i<n;i++)
    {
        for(k=1;k<(i*2)+1;k++)
        {
            printf(" ");
        }
        for(j=1;j<=n-i;j++)
        {
            printf("%d ",j);
        }
        for(m=y-2;m>0;m--)
        {
            printf("%d ",m);
        }
        y--;
        printf("\n");
    }
}

