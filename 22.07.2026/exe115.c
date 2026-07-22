#include<stdio.h>

void main()
{
    int i,j,r,c,sum;
    printf("Enter the row and column: ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter the position of [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    //sum of columns.

    for(i=0;i<c;i++)
    {
        sum=0;
        for(j=0;j<r;j++)
        {
            sum+=a[j][i];
        }
        printf("\nThe sum of %d column is %d.",i+1,sum);
    }
}