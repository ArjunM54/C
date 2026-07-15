#include<stdio.h>

void main()
{
    int i,n,j,k,m,l;
    printf("Enter n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(k=n-i;k>0;k--)
        {
            printf("  ");
        }
        for(m=n-i;m>1;m--)
        {
            printf("  ");
        }
        for(l=i;l>0;l--)
        {
            if(l==n){
                continue;
            }
            printf("%d ",l);
        }
        printf("\n");
    }
}
