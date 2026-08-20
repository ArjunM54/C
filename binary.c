#include<stdio.h>
int binarySearch(int a[],int n,int len)
{

    int left=0,right=len-1,mid;

    while(left<=right)
    {
        mid=(left+right)/2;

        if(a[mid]==n)
        {
            printf("%d in index of %d",n,mid);
            break;
        }
        else if(a[mid]>n)
        {
            right=mid-1;
        }
        else if(a[mid]<n)
        {
            left=mid+1;
        }
    }
}
void main()
{
    int n;
    printf("enter a element to search:");
    scanf("%d",&n);


    int a[]={20,38,45,78,97};
    int len=sizeof(a)/sizeof(a[0]);
    binarySearch(a,n,len);
}