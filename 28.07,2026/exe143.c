/*
8.Rotate an Array by d – Counterclockwise or Left
Given an array of integers arr[] of size n, the task is to rotate the 
array elements to the left by d positions.
Examples:
Input: arr[] = {1, 2, 3, 4, 5, 6}, d = 2
Output: {3, 4, 5, 6, 1, 2}
Explanation: After first left rotation, arr[] becomes {2, 3, 4, 5, 6, 1} and 
after the second rotation, arr[] becomes {3, 4, 5, 6, 1, 2}
Input: arr[] = {1, 2, 3}, d = 4
Output: {2, 3, 1}
Explanation: The array is rotated as follows:
•	After first left rotation, arr[] = {2, 3, 1}
•	After second left rotation, arr[] = {3, 1, 2}
•	After third left rotation, arr[] = {1, 2, 3}
•	After fourth left rotation, arr[] = {2, 3, 1}
*/
#include<stdio.h>
void main()
{
    int n,i,j;
    int d;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter array: ");
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter value for left shift: ");
    scanf("%d",&d);
    int f = d;
    int b[n];
    for(i=0;i<d;i++)
    {
        b[i]=a[i];
    }
    while(d>0){
        for(i=d;i<n;i++)
        {
            a[i-1]=a[i];
        }
        d--;
    }
    int g=n-f;
    for(i=g;i<n;i++)
    {
        a[i]=b[i-g];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}