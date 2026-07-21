#include<stdio.h>
#include<conio.h>

void main(){
    int i,n,x;
    printf("Enter a number (D to B): ");
    scanf("%d",&n);

    char a[100];
    char b[]={'A','B','C','D','E','F'};
    int index=0;
    
    while(n>0){
        x = n % 16;
        a[index]=x;
        n=n/16;
        index++;
    }
    for(i=index-1;i>=0;i--){
        if(a[i]<10){
            printf("%d",a[i]);
        }
        else if(10<=a[i] && a[i]<16){
            printf("%c",b[a[i]%10]);
        }
    }
}