#include<stdio.h>

void main()
{
    int i,j;
    int arr[]={1,2,1,3,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[j]=0;
            }
        }
        if(arr[i]==0){
            continue;
        }
        else{
            printf("%d ",arr[i]);
        }
    }
}