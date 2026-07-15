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
}
