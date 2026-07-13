#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    if(isalpha(c))
    {
        printf("It's a character.");
    }
    else if(isdigit(c))
    {
        printf("It is a digit.");
    }
    else
    {
        printf("It is a special character.");
    }
    getch();
}
