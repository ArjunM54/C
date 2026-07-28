/*
10.	Print array after it is right rotated K times
Given an Array of size N and a value K, around which we need to right rotate the array.
How do you quickly print the right rotated array?
Examples :
Input: Array[] = {1, 3, 5, 7, 9}, K = 2.
Output: 7 9 1 3 5
Explanation:
After 1st rotation – {9, 1, 3, 5, 7}After 2nd rotation – {7, 9, 1, 3, 5}

Input: Array[] = {1, 2, 3, 4, 5}, K = 4.
Output: 2 3 4 5 1   

*/
#include<stdio.h>
void main()
{
    int i,j,n;
    int a[] = {1, 3, 5, 7, 9};
    n = sizeof(a)/sizeof(a[0]);
    int b[n];
    int r;
    printf("Enter the number to rotate: ");
    scanf("%d",&r);
    r = r%n;
    for(i=0;i<n;i++)
    {
        b[(i+r)%n]=a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}