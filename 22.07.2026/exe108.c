#include<stdio.h>

void main()
{
    int i,j,count,max=0,frequent;
    int arr[]={1,1,2,1,3,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<n;i++){
        count = 1;
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){
                break;
            }
        }
        if(j!=i){
            continue;
        }
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(max<count){
            max=count;
            frequent = arr[i];
        }
    }
    printf("Most frequent element: %d",frequent);
}