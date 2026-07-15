#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,m,n,z;

    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter the repetetion:");
    scanf("%d",&m);

    for(z=1;z<=m;z++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i-1;j++)
            {
                printf(" ");
            }
            printf("%d\n",i);
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n-i;j++)
            {
                printf(" ");
            }
            printf("%d\n",i);
        }

    }

}
