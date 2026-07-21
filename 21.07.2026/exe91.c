#include<stdio.h>
#include<conio.h>

void main(){
    int i,n,x;
    printf("Enter a number (D to o): ");
    scanf("%d",&n);

    char a[100];
    int index=0;
    
    while(n>0){
        x = n % 8;
        a[index]=x;
        n=n/8;
        index++;
    }
    for(i=index-1;i>=0;i--)
    printf("%d ",a[i]);
}