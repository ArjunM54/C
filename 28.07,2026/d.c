#include<stdio.h>

void main()
{
    int i,j,n,s;
    printf("Enter n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(s=0;s<n-i;s++){
            printf(" ");
        }
        if(i==n){
            for(j=1;j<=n;j++)
            {
                printf("* ");
            }
            continue;
        }
        for(j=1;j<=2*i-1;j++)
        {
            if(j==2*i-1||j==1)
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