#include<stdio.h>

void main(){
    int i,n,m,j,k,p;
    printf("Enter n(range):");
    scanf("%d",&n);
    int list[n];
    int index=0;
    j=1;
    k=1;
    int total = 0;
    for(i=1;i<=n;i++)
    {
        if(i<=2){
            list[index]=1;
        }
        else if(i%2==1){
            j=j*2;
            list[index]=j;
        }
        else {
            k=k*3;
            list[index]=k;
        }
        index++;
    }
    printf("[ ");
    for(m=0;m<n;m++){
        total=total+list[m];
        printf("%d ",list[m]);
    }
    printf("]");
    printf("\nThe sum is: %d",total);
    
}
