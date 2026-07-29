/*
4.	Write a program to remove duplicate elements from an array using pointers 
without creating another array. Display the modified array and its new size.
*/
#include<stdio.h>

void dup(int *a, int *n)
{
    int i,j;
    int count;
    int temp;
    for(i=0;i<*n;i++)
    {
        for(j=i+1;j<*n;j++)
        {
            if(*(a+i)==*(a+j))
            {
                temp = *(a+i);
                *(a+i) = *(a+ *n-1);
                *(a+ *n-1) = temp;
                (*n)--;
                j--;
            }
        }
    }
    for(i=0;i<*n;i++)
    {
        printf("%d",*(a+i));
    }
    printf("\nThe size is: %d",*n);
}
void main()
{
    int i,n;
    int a[]={1,2,2,3,4,5,5,6};
    n = sizeof(a)/sizeof(a[0]);
    dup(a,&n);
}