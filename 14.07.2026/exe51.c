//Write a program in C to find the prime numbers within a range of numbers.

#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;
    printf("Enter the range:");
    scanf("%d%d",&a,&b);

    for(int i=a;i<=b;i++)
    {
        int x=i;
        int c=0;
        if((i==1)||(i==0))
            c=1;
        for(int j=2;j<x;j++)
        {
            if(x%j==0)
            {
                c=1;
            }
        }
        if(c==0){
            printf("%d ",i);
        }
    }
}
