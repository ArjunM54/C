//second smallest
#include<stdio.h>

void main(){
    int temp;
    int arr[] = {4,2,6,3,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int first=arr[0];
    int second = -1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<first){
            second = first;
            first = arr[i];
        }
        else if(arr[i]>first && second==-1||arr[i]<second){
            second=arr[i];
        }
    }
    printf("%d",second);
    
}