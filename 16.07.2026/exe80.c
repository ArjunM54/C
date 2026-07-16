#include<stdio.h>

void main()
{
    int i,n,j;

    printf("Enter n:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%c ",j+97);
        }
        printf("\n");
    }
}