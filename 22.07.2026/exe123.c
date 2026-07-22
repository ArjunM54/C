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
    int c[n1][m1];
    int b[n2][m2];
    int d[n2][m2];
    if(n1!=m2){
        printf("Can't multiple.");
    }
    else
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
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m1;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
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
        for(i=0;i<n2;i++)
        {
            for(j=0;j<m2;j++)
            {
                printf("%d ",b[i][j]);
            }
            printf("\n");
        }

        printf("\nMultiple of two matrix is:\n");
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m2;j++)
            {
                c[i][j]=0;
                for(z=0;z<m1;z++)
                {
                    c[i][j]+=a[i][j]*b[j][i]+;
                }
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
}