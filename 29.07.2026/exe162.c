/*
5.An array contains numbers from 1 to N, but one number is missing. 
Write a function using pointers to find the missing number.
*/
#include<stdio.h>

void miss(int *a, int n)
{
    int i;
    int j;
    int found;
    for(i=1;i<n+1;i++)
    {
        found = 0;
        for(j=0;j<n;j++)
        {
            if(*(a+j)==i)
            {
                found = 1;
                break;
            }
        }
        if(found==0)
        {
            printf("The missing number is: %d",i);
            return;
        }
    }
    printf("No missing number");
    return;
}
int main()
{
    int a[]={1,2,3,4,6,7};
    int n = sizeof(a)/sizeof(a[0]);
    miss(a,n);
    return 0;
}