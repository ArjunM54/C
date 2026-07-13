#include<stdio.h>
#include<conio.h>

void main()
{
    char c;
    printf("Enter the character:");
    scanf("%c",&c);

    switch(c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("it's vowel");
        break;
    default:
        printf("it's consonant");

    }
}
