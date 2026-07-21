#include<stdio.h>

void main()
{
    int n,i;
    printf("Enter n(range): ");
    scanf("%d",&n);
    int fib[n];

    fib[0]=0;
    fib[1]=1;

    for(i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(int m=0;m<n;m++){
        printf("%d ",fib[m]);
    }


}