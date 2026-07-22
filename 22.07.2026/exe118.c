#include<stdio.h>

void main()
{
    int i,j,r,c,scalar;
    printf("Enter rows and colums: ");
    scanf("%d %d",&r,&c);
    printf("Enter the number to multiple: ");
    scanf("%d",&scalar);
    int a[r][c];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the position of [%d][%d]: ",i,j);
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
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            a[i][j]=a[i][j]*scalar;
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}