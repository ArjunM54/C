#include<stdio.h>
#include<conio.h>

void main()
{
    printf("Terenary Operator:");
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    printf("%d",a % 7 ==0 ? a*2:a*3);
    getch();
}
