#include<stdio.h>

void main()
{
    int n1,m1,n2,m2,i,j;
    printf("Enter rows1: ");
    scanf("%d",&n1);
    printf("Enter columns1: ");
    scanf("%d",&m1);
    printf("Enter rows2: ");
    scanf("%d",&n2);
    printf("Enter columns2: ");
    scanf("%d",&m2);
    int a[n1][m1];
    int c[n1][m1];
    int b[n2][m2];
    if(n1==n2&&m1==m2)
    {
        printf("\nEnter the first matrix:\n");
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m1;j++)
            {
                printf("Enter the elements in %d%d: ",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        printf("\nEnter the secont matrix:\n");
        for(i=0;i<n2;i++)
        {
            for(j=0;j<m2;j++)
            {
                printf("Enter the elements in %d%d: ",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        printf("\nAddition of two matrix is:\n");
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m1;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m1;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Adition is not possible.");
    }
}