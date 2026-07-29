/*
6.Write a program using pointers to determine the length of the longest increasing contiguous subarray
*/
#include<stdio.h>

void con(int *a, int n)
{
    int i;
    int streak=1;
    int length =1;
    for(i=0;i<n-1;i++)
    {
        streak++;
        if(*(a+i) < *(a+i+1))         // {10, 22, 9, 33, 49, 50};
        {
            if(streak>length)
            {
                length=streak;
            }
        }
        else{
            streak=1;
        }
    }
    printf("The max length is: %d",length);
}

int main()
{
    int a[]={10, 22, 9, 33, 49, 50, 70};
    int n = sizeof(a)/sizeof(a[0]);
    con(a,n);
    return 0;
}