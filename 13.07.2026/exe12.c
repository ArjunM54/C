#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    printf("Enter a number 1to7:");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("Wenesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("sartutday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Enter a number 1 to 7");

    }
}
