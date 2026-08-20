#include<stdio.h>

void main()
{
    int n;
    printf("enter a number to search:");
    scanf("%d",&n);

    int a[]={1,4,6,3,9};

    int len=sizeof(a)/sizeof(a[0]);
    int found=0;
    for(int i=0;i<len;i++)
    {
        if(a[i]==n)
        {
            printf("%d in the index %d",n,i);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("number not found");
    }
}