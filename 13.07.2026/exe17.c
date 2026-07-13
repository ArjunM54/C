#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    printf("Enter the units used:");
    scanf("%d",&n);

    switch((0<n)&&(n<200))
    {
    case 1:
        printf("the amount is %d",n*3);
        break;
    default:
        switch((201<=n)&&(n<500))
        {
        case 1:
            printf("the amount is %d",n*4);
            break;
        default:
            switch((501<=n)&&(n<1000))
            {
            case 1:
                printf("the amount is %d",n*8);
                break;
            default:
                printf("the amount is %d",n*16);
            }
        }
    }
}
