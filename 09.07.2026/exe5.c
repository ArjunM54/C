#include<stdio.h>
void main()
{
    int a,f;
    printf("Enter the number:");
    scanf("%d",&a);
    f = (a%5==0 && a%7==0) ? printf("divide by both 5 and 7")
          : (a%5==0) ? printf("Divide by 5 only")
              : (a%7==0) ? printf("divide by 7 only")
                 : printf("not divide by both");
}

