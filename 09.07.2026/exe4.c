#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter three nubers:");
    scanf("%d%d%d",&a,&b,&c);

    int d = (a>b)?(a>c?a:c):(b>c?b:c);
    printf("The greatest number is:%d",d);
}
