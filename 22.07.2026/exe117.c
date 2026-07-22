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
    //largest in rows.

    for(i=0;i<r;i++)
    {
        largest=0;
        for(j=0;j<c;j++)
        {
            if(a[i][j]>largest){
                largest= a[i][j];
            }
        }
        printf("\nThe largest of %d row is %d.",i+1,largest);
    }
}