#include<stdio.h>

void main()
{
    int n,i;
    printf("Enter n:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        if(i==3){
            return;
        }
        printf("%d\n",i);
    }
    printf("Done!!");
}