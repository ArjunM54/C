#include<stdio.h>

void main()
{
    int n,m,i,j;
    printf("Enter rows: ");
    scanf("%d",&n);
    printf("Enter columns: ");
    scanf("%d",&m);

    int a[n][m];
    int b[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Enter the elements in %d%d: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nThe transpose of the matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}