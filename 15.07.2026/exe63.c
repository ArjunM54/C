#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,n,k;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(k=0;k<n-i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    getch();
}


