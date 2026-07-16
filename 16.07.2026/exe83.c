#include<stdio.h>

void main()
{
    int i,j,n,s;
    int c;

    printf("Enter n:");
    scanf("%d",&n);
    int arr[100][100];

    for(i=1;i<=n;i++){
        for(s=0;s<n-i;s++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++){
            if(j==1||j==n){
                arr[i][j]=1;
            }
            else{
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
