#include<stdio.h>
#include<conio.h>

void main()
{
    int i=1,n,mul;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Multiplier:\n");
    scanf("%d",&mul);
    printf("Multiple of %d\n",mul);
    print:
        printf("%d*%d=%d\n",i,n,mul*i);
        i++;
        if(i<=n)
        {
            goto print;
        }
    getch();
}
