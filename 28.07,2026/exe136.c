/*
2.	Identify Row with Most 1
You are given a 2D matrix of size n×m consisting only of 0′s and 1′s. Your task is to determine the index of the row that contains the maximum number of 1′s. In the case of multiple rows having the same maximum count of 1′s, return the index of the first such row.
Input Format
o	The first line contains two integers n and m, representing the number of rows and columns in the matrix, respectively.
o	The next n lines each contain m integers (00 or 11), representing the elements of the matrix.
Output Format
•	Output a single integer, the index (00-based) of the row that has the maximum number of 1′s. If all rows contain only 0′s, output −1.
     Sample
	Input	
3 4
0 1 0 0
1 1 0 0
0 0 0 1
Output
1

*/
#include<stdio.h>
void main()
{
    int i,j,r,c,count;
    printf("Enter row: ");
    scanf("%d",&r);
    printf("Enter column: ");
    scanf("%d",&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter value of [%d][%d]:",i,j);
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
    int row = -1;
    int max = 0;
    for(i=0;i<r;i++)
    {
        count = 0;
        for(j=0;j<c;j++)
        {
            if(a[i][j]==1)
            {
                count += 1;
            }
        }
        if(count>max){
            max=count;
            row = i;
        }
    }
    if(row==-1)
    {
        printf("No Ones.");
    }
    else{
        printf("The row is: %d",row);
    }
}