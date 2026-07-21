#include<stdio.h>

void main(){
    int x,i,j;
    printf("Enter an element to insert: ");
    scanf("%d",&x);
    int a[]={1,3,4,5,6};
    int n= sizeof(a)/sizeof(a[0]);
    int m=n;
    int temp;

    for(i=0;i<n;i++){
        if(x>a[i]){
            temp=i;
        }
    }
    n=n+1;
    if(temp!=0){
        for(j=m-1;j>=temp+1;j--){
        a[j+1]=a[j];
    }
    }
    else if(temp == 0){
        for(j=m-1;j>=temp;j--){
        a[j+1]=a[j];
        }
    }
    if(temp!=0){
        a[temp+1]=x;
    }
    if(temp==0){
        a[temp]=x;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}