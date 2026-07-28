/*
12.	Given an array of pairs, find all symmetric pairs in it
Two pairs (a, b) and (c, d) are said to be symmetric if c is equal to b and a is equal to d.
For example, (10, 20) and (20, 10) are symmetric. 
Given an array of pairs find all symmetric pairs in it. 
It may be assumed that the first elements of all pairs are distinct.
Example: 

Input: arr[] = {{11, 20}, {30, 40}, {5, 10}, {40, 30}, {10, 5}}
Output: Following pairs have symmetric pairs
        (30, 40)
        (5, 10)  
*/
#include<stdio.h>
int main()
{
    int i,j,n;
    int a[5][2]={{11,20},{30,40},{5,10},{40,30},{10,5}};
    int b[100][100];
    for(i=0;i<5;i++)
    {
        for(j=0;j<2;j++)
        {
            b[i][j]=a[i][j];
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i][0] == a[j][1] && a[i][1] == a[j][0])
            {
                printf("{%d,%d}",a[i][0],a[i][1]);
            }
        }
    }
    return 0;
}