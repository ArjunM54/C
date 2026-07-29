/*3.Write a program that rearranges an array so that all negative numbers 
appear before positive numbers without using an additional array, using pointers.*/
#include<stdio.h>

void rearrange(int *a, int n)
{
    int i,j;
    int *left = a;
    int *right = a+n-1;
    int temp;
    while(left<right)
    {
        if(*left<0 && *right<0)
        {
            left++;
        }
        else if(*left>=0 && *right<0)
        {
            temp = *right;
            *right = *left;
            *left = temp;
            left++;
            right--;
        }
        else if(*left>=0 && *right>=0)
        {
            right--;
        }
        else{
            left++;
            right--;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
}
void main()
{
    int i,n;
    int a[]={-1,2,1,-3,4,7,8,-4,3,10};
    n = sizeof(a)/sizeof(a[0]);
    rearrange(a,n);
}