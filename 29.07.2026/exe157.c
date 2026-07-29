//11.Write a function that rotates an array to the right by K positions using only pointer arithmetic. 
// The program should work for any value of K, even when K > size of the array.
#include<stdio.h>

int* rightro(int *, int size, int r);
void main()
{
    int i,j,n,r;
    int a[]={1 ,2 ,3 ,4 ,5};
    n = sizeof(a)/sizeof(a[0]);
    printf("Enter a number to rightrotate: ");
    scanf("%d",&r);
    rightro(a,n,r);
    for(i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
}
int* rightro(int *arr, int size, int r)
{
    int j,i,temp;
    r=r%size;
    for(i=0;i<r;i++)
    {
        temp = *(arr+size-1);
        for(j=size-1;j>0;j--)
        {
            *(arr+j) = *(arr+j-1);
        }
        *arr=temp;
    }
    return arr;
}