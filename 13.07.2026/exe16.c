#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    switch((a>b)&&(a>c))
    {
    case 1:
        printf("the greatest is:%d",a);
        break;
    default:
        switch((b>c)&&(b>a))
        {
        case 1:
            printf("the greatest is:%d",b);
            break;
        default:
            printf("the greatest is:%d",c);
        }

    }
}
