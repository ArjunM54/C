//2.Write a program to determine whether one array is a reverse rotation of another array using pointers.
#include<stdio.h>

void compare(int *a, int *b, int n, int m)
{
    int i,j;
    int p1 = *a;
    int p2 = *b;
    int found;
    for(i=0, j=m-1 ; i<n , j>=0 ; i++, j--)
    {
        found=0;
        if(*(b+j) == *(a+i))
        {
            found=1;
        }
    }
    if(found)
    {
        printf("reverse.");
    }
    else
    {
        printf("Not reverse.");
    }
}

void main()
{
    int i,j,size1,size2;
    int a[]={1,2,3,4,5};
    int b[]={5,4,3,2,1};
    size1 = sizeof(a)/sizeof(a[0]);
    size2 = sizeof(b)/sizeof(b[0]);

    compare(a,b,size1,size2);
}