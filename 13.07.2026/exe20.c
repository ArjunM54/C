#include<stdio.h>
#include<conio.h>

void main()
{
    int i =1,n = 5;
    print:
        printf("%d\n",i);
        i++;
        if(i<=n)
        {
            goto print;
        }
    getch();
}
