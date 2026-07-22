#include<stdio.h>

void main()
{
    int i,j,r,c;
    printf("Enter rows and colums: ");
    scanf("%d %d",&r,&c);
    int a[r][c];

    if(c==r){
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
        printf("\n lower triangle\n");
        int flag=1;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(j<=i){
                    printf("%d ",a[i][j]);
                }
                else{
                    printf("0 ");
                }
            }
            printf("\n");
        }
    }
    else{
        printf("Enter the both column and row same.");
    }
}