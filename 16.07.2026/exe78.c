#include<stdio.h>

void main()
{
    int i,j,n;
    printf("Enter n:");
    scanf("%d",&n);

    printf(" i   j\n");
    for(i=1,j=n;i<=n,j>0;i++,j--)
    {
        printf(" %d   %d\n",i,j);
    }
}