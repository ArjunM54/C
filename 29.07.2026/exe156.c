//1.Write a function that rotates an array to the left by K positions using only pointer arithmetic. 
// The program should work for any value of K, even when K > size of the array.
#include<stdio.h>

int* leftro(int *, int size, int r);
void main()
{
    int i,j,n,r;
    int a[]={1 ,2 ,3 ,4 ,5};
    n = sizeof(a)/sizeof(a[0]);
    printf("Enter a number to leftrotate: ");
    scanf("%d",&r);
    leftro(a,n,r);
    for(i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
}
int* leftro(int *arr, int size, int r)
{
    int j,i,temp;
    r=r%size;
    for(i=0;i<r;i++)
    {
        temp = *arr;
        for(j=0;j<size;j++)
        {
            *(arr+j) = *(arr+j+1);
        }
        *(arr+size-1)=temp;
    }
    return arr;
}