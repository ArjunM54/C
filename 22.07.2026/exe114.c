#include<stdio.h>

void main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int b[n];
    int k,i,j,p;

    printf("Enter the element to right shift: ");
    scanf("%d",&k);

    for(i=n-1;i>n-1-k;i--)
    {
        b[n-1-i]=a[i];
    }
    for(i=0;i<k;i++)
    {
        for(j=n-k+i-1;j>=0;j--)
        {
            a[j+1]=a[j];
        }
    }
    for(p=1;p<=k;p++)
    {
        a[k-p]=b[p-1];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}