#include<stdio.h>

void main(){
    int i,j,l,x,temp;
    printf("Enter the range of both array: ");
    scanf("%d",&x);
    int n[x];
    printf("Enter first array: ");
    for(i=0;i<x;i++){
        scanf("%d",&n[i]);
    }
    int m[x];
    printf("Enter second array: ");
    for(i=0;i<x;i++){
        scanf("%d",&m[i]);
    }
    int y=x+x;
    int k[y];
    for(i=0;i<x;i++){
        k[i]=n[i];
    }
    for(i=x;i<y;i++){
        k[i]=m[i-x];
    }
    printf("The merged array is: ");
    for(i=0;i<y;i++){
        printf("%d ",k[i]);
    }

    for(j=0;j<y;j++){
        for(l=j+1;l<y;l++){
            if(k[j]>k[l]){
                temp=k[j];
                k[j]=k[l];
                k[l]=temp;
            }
        }
    }
    printf("\nThe sorted array is: ");
    for(int m=0;m<y;m++){
        printf("%d ",k[m]);
    }
}