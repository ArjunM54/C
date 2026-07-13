#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    if(isupper(c))
    {
        printf("Uppercase");
    }
    else
    {
        printf("Lowercase");
    }
    getch();
}
