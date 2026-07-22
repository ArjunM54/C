#include<stdio.h>

void main()
{
    int n1,m1,n2,m2,i,j,z;

    printf("Enter rows1: ");
    scanf("%d",&n1);

    printf("Enter columns1: ");
    scanf("%d",&m1);

    printf("Enter rows2: ");
    scanf("%d",&n2);

    printf("Enter columns2: ");
    scanf("%d",&m2);

    int a[n1][m1];
    int b[n2][m2];
    int c[10][10];

    if(m1 != n2)
    {
        printf("Can't multiply.");
        return;
    }

    printf("\nEnter the first matrix:\n");

    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            printf("Enter the element at [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nFirst Matrix:\n");

    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter the second matrix:\n");

    for(i=0;i<n2;i++)
    {
        for(j=0;j<m2;j++)
        {
            printf("Enter the element at [%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nSecond Matrix:\n");

    for(i=0;i<n2;i++)
    {
        for(j=0;j<m2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    printf("\nMultiplication of two matrices:\n");

    for(i=0;i<n1;i++)
    {
        for(j=0;j<m2;j++)
        {
            c[i][j]=0;

            for(z=0;z<m1;z++)
            {
                c[i][j] += a[i][z] * b[z][j];
            }
        }
    }

    for(i=0;i<n1;i++)
    {
        for(j=0;j<m2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}