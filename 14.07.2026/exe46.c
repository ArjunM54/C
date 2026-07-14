#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    printf("Enter N:");
    scanf("%d",&n);

    int c=0;
    if((n==0)||(n==1))
        c=1;
    for(int i=2;i<n;i++)
    {
        if(i==n){
            continue;
        }
        else if(n%i==0){
            c=1;
        }
    }
    if(c==0)
    {
        printf("The number is prime.");
    }
    else{
        printf("The number is not prime.");
    }
}
