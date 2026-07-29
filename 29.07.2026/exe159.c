//2.Write a program to determine whether one array is a circular rotation of another array using pointers

#include<stdio.h>

int compare(int *a, int *b, int n, int m)
{
    int i,j;
    int start = -1;
    for(i=0;i<n;i++)
    {
        if(*(a+i) == *b)
        {
            start=i;
            break;
        }
    }
    if(start==-1)
    {
        printf("Not circular.");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        if(*(a+(start+i)%n) != *(b+i))
        {
            printf("not Circular.");
            return 0;
        }
    }
    printf("circular circular.");
}

void main()
{
    int i,j,size1,size2;
    int a[]={1,2,3,4,5};
    int b[]={3,4,5,1,2};
    size1 = sizeof(a)/sizeof(a[0]);
    size2 = sizeof(b)/sizeof(b[0]);

    compare(a,b,size1,size2);
}