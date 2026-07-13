#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    switch(a>b)
    {
    case 1:
        printf("The greatest is: %d",a>c?a:c);
        break;
    default:
        printf("The greatest is: %d",b>c?b:c);

    }
}
