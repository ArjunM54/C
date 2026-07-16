#include<stdio.h>

void main()
{
    int i,n,j,s;

    printf("Enter n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(s=0;s<n-i;s++){
            printf("  ");
        }
        for(j=i;j<2*i;j++){
            printf("%d ",j);
        }
        for(j=2*i-2;j>=i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}