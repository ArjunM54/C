#include<stdio.h>

void main()
{
    int i,j,r,c,largest;
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
    //largest in columns.

    for(i=0;i<c;i++)
    {
        largest=0;
        for(j=0;j<r;j++)
        {
            if(a[j][i]>largest){
                largest= a[j][i];
            }
        }
        printf("\nThe largest of %d column is %d.",i+1,largest);
    }
}