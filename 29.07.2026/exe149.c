//2.Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>
int series(int n)
{
    int i,fact=1;
    int seriess=0;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        seriess += fact/i;
    }
    return seriess;
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("%d ",series(n));
    return 0;
}