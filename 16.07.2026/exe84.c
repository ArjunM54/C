#include<stdio.h>

void main()
{
    int i,j,n,m;

    printf("Enter start value:");
    scanf("%d",&n);

    printf("Enter end value:");
    scanf("%d",&m);

    for(i=n;i<=m;i++){
        if(m<10){
            printf("%d ",i);
        }
        else if(m<100){
            printf("%02d ",i);
        }
        else if(m<1000){
            printf("%03d ",i);
        }
    }
}