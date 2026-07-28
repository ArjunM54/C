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
            int *p = &a[i][j];
            if(i>j)
            {
                *p=0;
            }
            else{
                printf("Enter the position %d,%d: ",i,j);
                scanf("%d",&*p);
            }
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
}