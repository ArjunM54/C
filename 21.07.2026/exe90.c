#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,x;
    printf("Enter a number (D to B): ");
    scanf("%d",&n);

    char a[100];
    int index=0;
    
    while(n>0){
        x = n % 2;
        a[index]=x;
        n=n/2;
        index++;
    }
    for(i=index-1;i>=0;i--)
    printf("%d ",a[i]);

}