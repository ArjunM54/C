#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    float a,b;
    printf("======================\n");
    printf("1.square\n");
    printf("2.circle\n");
    printf("3.Rectangle\n");
    printf("4.Triangle\n");
    printf("======================\n");
    printf("Enter a number 1 to 4:");
    scanf("%d",&n);

    switch(n)
    {
    case 1:
        printf("Enter a number :");
        scanf("%f",&a);
        printf("Area of the square is %f",a*a);
        break;
    case 2:
        printf("Enter a number :");
        scanf("%f",&a);
        printf("Area of the circle is %f",2*3.14*a);
        break;
    case 3:
        printf("Enter a number :");
        scanf("%f",&a);
        printf("Enter a number :");
        scanf("%f",&b);
        printf("Area of the rectangle is %f",a*b);
        break;
    case 4:
        printf("Enter a breath :");
        scanf("%f",&a);
        printf("Enter a height :");
        scanf("%f",&b);
        printf("Area of triangle is %f",0.5*a*b);
        break;
    default:
        printf("Enter 1 to 4.");
    }
    getch();
}
