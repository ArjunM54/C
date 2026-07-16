#include<stdio.h>

void main()
{
    int n,a=0,b=0;

    printf("Enter the number of turns:");
    scanf("%d",&n);
    
    int distance=10;
    char direction = 'R';

    while(n>0){
        switch(direction){
        case 'R':
            a=a+distance;
            direction='U';
            break;
        case 'U':
            b=b+distance;
            direction='L';
            break;
        case 'L':
            a=a-distance;
            direction='D';
            break;
        case 'D':
            b=b-distance;
            direction='A';
            break;
        case 'A':
            a=a+distance;
            direction='R';
            break;
        }
        distance=distance+10;
        n--;
    }
    printf("%d %d",a,b);
}