//ascending order

#include<stdio.h>

void main(){
    int temp;
    int arr[] = {2,4,6,3,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int m=0;m<n;m++){
        printf("%d ",arr[m]);
    }
    
}