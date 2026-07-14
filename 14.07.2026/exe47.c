#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i,n,digit,temp,rem,arm=0,dig=0,x;
    printf("Enter the number:");
    scanf("%d",&n);
    temp = n;

    while(temp>0)
    {
        temp=temp/10;
        dig++;
    }
    temp =n;
    while(temp>0)
    {
        rem=temp%10;
        x=1;
        for(i=1;i<=dig;i++){
            x=x*rem;
        }

        arm=arm+x;
        temp=temp/10;
    }
    if(arm==n)
    {
        printf("Amstrong.");
    }
    else{
        printf("Not amstrong");
    }
    getch();
}
