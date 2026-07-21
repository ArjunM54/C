#include<stdio.h>

void main(){
    int i,j;
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(a)/sizeof(a[0]);
    int b[n];

    for(i=n-1,j=0;i>=0,j<n;i--,j++){
            b[j]=a[i];
            printf("%d ",b[j]);
    }
}