#include<stdio.h>

void main()
{
    int i,n,m,total,current;
    printf("Enter the mints:");
    scanf("%d",&n);
    printf("Queue length:");
    scanf("%d",&m);
    current=n;
    total=n;
    for(i=2;i<=m;i++){
        current=total-1;
        total=total+current;
    }
    printf("%d",total);
}