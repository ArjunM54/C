//Write a program in C to display the first n terms of Fibonacci series.

#include<stdio.h>
#include<conio.h>

void main()
{
    int n,fn,sn,ne;
    printf("Enter n:");
    scanf("%d",&n);

    fn=0;
    sn=1;
    printf("%d %d ",fn,sn);
    for(int i=3;i<=n;i++)
    {
        ne=fn+sn;
        fn=sn;
        sn=ne;
        printf("%d ",ne);
    }
}
