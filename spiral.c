#include<stdio.h>

void main()
{
    int r,c;
    printf("enter a row:");
    scanf("%d",&r);
    printf("enter a column:");
    scanf("%d",&c);

    int a[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
          printf("enter a element of matrix %d%d:",i,j);
          scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf(" %d",a[i][j]);

        }
        printf("\n");
    }

    int top=0;
    int right=c-1;
    int left=0;
    int bottom=r-1;
   while(left<=right)
   {

    for(int i=left;i<=right;i++)
    {
        printf("%d",a[top][i]);
    }
    for(int j=top+1;j<=bottom;j++)
    {
        printf("%d",a[j][right]);
    }
    for(int z=right-1;z>=left;z--)
    {
        printf("%d",a[bottom][z]);
    }
    for(int m=bottom-1;m>top;m--)
    {
        printf("%d",a[m][left]);
    }
    top++;
    left++;
    right--;
    bottom--;
   }

}