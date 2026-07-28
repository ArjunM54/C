#include<stdio.h>
#include<conio.h>

void main()
{
    int r,c,i,j;
    printf("Enter the row and column: ");
    scanf("%d %d",&r,&c);
    int a[r][c];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            int *p=&a[i][j];
            printf("Enter the position %d,%d: ",i,j);
            scanf("%d",&*p);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            int *p = &a[i][j];
            printf("%d ",*p);
        }
        printf("\n");
    }

    int dit = (a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])-
              a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+
              a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]));

    printf("%d",dit);
}