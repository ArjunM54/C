#include<stdio.h>

void main()
{
    int i,j,n,s;
    printf("Enter n: ");
    scanf("%d",&n);

    for(i=n;i>0;i--)
    {
        for(s=0;s<n-i;s++)
        {
            printf(" ");
        }
        if(i==n)
        {
            for(j=1;j<=n;j++)
            {
                printf("* ");
            }
            printf("\n");
            continue;
        }
        
        for(j=1;j<=2*i-1;j++)
        {
            if(j==1 || j==2*i-1)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}