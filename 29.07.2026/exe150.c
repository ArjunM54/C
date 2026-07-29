//3.Write a program in C to convert a decimal number to a binary number using the function.
#include<stdio.h>

void dtob(int n)
{
    int count=0,temp;
    int f=n;
    int i=0;
    int a[100];
    while(n>0)
    {
        a[i] = n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    dtob(n);
    return 0;
}