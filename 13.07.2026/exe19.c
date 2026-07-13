#include<stdio.h>
#include<conio.h>

enum day
{
    MON,TUE,WED,THU,FRI,SAT,SUN
};

void main()
{
    enum day exp = WED;
    switch(exp)
    {
    case 0:
        printf("Monday");
        break;
    case 1:
        printf("tuesday");
        break;
    case 2:
        printf("Wednesday");
        break;
    case 3:
        printf("Thursday");
        break;
    case 4:
        printf("Friday");
        break;
    case 5:
        printf("Saturday");
        break;
    case 6:
        printf("Sunday");
        break;
    }
    getch();
}
