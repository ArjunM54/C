#include<stdio.h>

void main(){
    int i,n,m,j,k,p;
    printf("Enter n(range):");
    scanf("%d",&n);
    int list[n];
    int index=0;
    j=0;
    k=0;
    for(i=1;i<=n;i++)
    {
        if(i<=2){
            list[index]=0;
        }
        else if(i%2==1){
            j=j+7;
            list[index]=j;
        }
        else {
            k=k+6;
            list[index]=k;
        }
        index++;
    }
    printf("[ ");
    for(m=0;m<n;m++){
        printf("%d, ",list[m]);
    }
    printf("]");
    printf("\nEnter the position:");
    scanf("%d",&p);
    if(p>n){
        printf("please give the position with in n");
    }
    else{
        printf("\n%d",list[p]);
    }
}