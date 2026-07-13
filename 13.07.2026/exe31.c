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
    else
    {
        printf("It is'nt a character.");
    }
    getch();
}
