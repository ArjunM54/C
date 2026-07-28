/*
11.	Check if an array is subset of another array
Given two arrays a[] and b[] of size m and n respectively, the task is to determine whether b[] is a subset of a[]. Both arrays are not sorted, and elements are distinct.

Examples: 
Input: a[] = [11, 1, 13, 21, 3, 7], b[] = [11, 3, 7, 1] 
Output: true


Input: a[]= [1, 2, 3, 4, 5, 6], b = [1, 2, 4] 
Output: true


Input: a[] = [10, 5, 2, 23, 19], b = [19, 5, 3] 
Output: false
*/
#include<stdio.h>
int main()
{
    int i,j,n,m;
    int a[]={11, 1, 13, 21, 3, 7};
    n = sizeof(a)/sizeof(a[0]);
    int b[]={11, 3, 7, 21};
    m = sizeof(b)/sizeof(b[0]);
    int found;
    for(i=0;i<m;i++)
    {
        found =0;
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                found = 1;
                break;
            }
        }
        if(found==0)
        {
            printf("False");
            return 0;
        }
    }
    printf("True");
    return 0;
}