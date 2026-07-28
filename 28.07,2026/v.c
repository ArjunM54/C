#include<stdio.h>

void main()
{
    int j,i,n,s;
    printf("Enter N: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(s=0;s<i;s++)
        {
            printf("  ");
        }
        for(j=0;j<4;j++){
            printf("* ");
        }
        printf("\n");
    }

}