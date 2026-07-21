#include<stdio.h>

void main(){
    int i,j,n;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

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