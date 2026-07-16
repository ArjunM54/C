#include<stdio.h>

void main()
{
    int n;
    do{
        printf("\n=========================\n");
        printf("\t1.Square.\n");
        printf("\t2.Circle.\n");
        printf("\t3.Rectangle.\n");
        printf("\t4.Triangle.\n");
        printf("\t5.Exit\n");
        printf("=========================\n");

        printf("Enter choice:");
        scanf("%d",&n);

        float a,r,c,d,x,y;

        switch(n)
        {
        case 1:
            printf("Enter length of the square:");
            scanf("%f",&a);
            printf("The area of square is: %f", a*a);
            break;

        case 2:
            printf("Enter radius of the circle:");
            scanf("%f",&r);
            printf("The area of circle is: %f", 3.14*r*r);
            break;

        case 3:
            printf("Enter length and breath of the Rectangle:");
            scanf("%f%f",&x,&y);
            printf("The area of rectangle is: %f", x*y);
            break;

        case 4:
            printf("Enter breath and height of the triangle:");
            scanf("%f%f",&c,&d);
            printf("The area of Triangle is: %f", 0.5*c*d);
            break;

        default:
            if(n!=5)
                printf("Enter a number between 1 to 5 ");
        }
    }
    while(n!=5);

    if(n==5)
    {
        printf(" Exit!!!");
    }
}