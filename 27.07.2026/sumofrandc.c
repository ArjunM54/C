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
            printf("Enter the position %d,%d: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        int *p=&a[i][0];
        for(j=0;j<c;j++)
        {
            printf("%d ",*(p+j));
        }
        printf("\n");
    }

    //sum of rows and column:
    int all_sum_row = 0;
    for(i=0;i<r;i++)
    {
        int sum_r = 0;
        for(j=0;j<c;j++)
        {
            int *p = &a[i][j];
            sum_r += *p;
            all_sum_row+=*p;
        }
        printf("\nsum row %d is %d",i+1,sum_r);
        
    }
    printf("\nTotal sum of row is: %d",all_sum_row);

    int all_sum_col = 0;
    for(i=0;i<c;i++)
    {
        int sum_c = 0;
        for(j=0;j<r;j++)
        {
            int *p = &a[j][i];
            sum_c += *p;
            all_sum_col+=*p;
        }
        printf("\nsum col %d is %d",i+1,sum_c);
    }
    printf("\nTotal sum of col is: %d",all_sum_col);
}