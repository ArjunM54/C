/*
7.Given an array of integers of size N, the task is to find the 
first non-repeating element in this array.
Examples:
Input: {-1, 2, -1, 3, 0}
Output: 2
Explanation: The first number that does not repeat is : 2
Input: {9, 4, 9, 6, 7, 4}
Output: 6
*/
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        int count = 0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
    if(count==1)
    {
        printf("First non repeted element is: %d",a[i]);
        break;
    }
    }
}