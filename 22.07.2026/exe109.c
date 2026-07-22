#include<stdio.h>

void main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int b[n];
    int k,i,j,p;

    printf("Enter the element to left shift: ");
    scanf("%d",&k);

    for(i=0;i<k;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<k;i++)
    {
        for(j=k-i;j<n;j++)
        {
            a[j-1]=a[j];
        }
    }
    for(p=0;p<k;p++)
    {
        a[n-k+p]=b[p];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}