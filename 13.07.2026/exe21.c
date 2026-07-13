#include<stdio.h>
#include<conio.h>

void main()
{
    int i =1,n = 5;
    goto skip;
        printf("%d\n",i);
        i++;
        if(i<=n)
        {
            printf("not done!");
        }
    skip:
        printf("Done!!");
    getch();
}
