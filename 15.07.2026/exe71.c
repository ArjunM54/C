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
            if(j%2==0){
               printf("0");
            }
            else{
                printf("1");
            }
        }
        for(k=n-i;k>0;k--)
        {
            printf(" ");
        }
        for(m=n-i;m>1;m--)
        {
            printf(" ");
        }
        for(l=i;l>0;l--)
        {
            if(l==n){
                continue;
            }
            if(l%2==0){
               printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }

    for(i=n-1;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0){
               printf("0");
            }
            else{
                printf("1");
            }
        }
        for(k=n-i;k>0;k--)
        {
            printf(" ");
        }
        for(m=n-i;m>1;m--)
        {
            printf(" ");
        }
        for(l=i;l>0;l--)
        {
            if(l==n){
                continue;
            }
            if(l%2==0){
               printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }
}
