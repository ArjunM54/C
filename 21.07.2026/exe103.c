//print the frequency of the array element

#include<stdio.h>
void main()
{
    int l,i,j,n;
    printf("Enter the range of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Array: ");
    for(l=0;l<n;l++){
        scanf("%d",&a[l]);
    }
    
    for(i=0;i<n;i++){
        int visited = 0;
        int count =0;
        for(int k=0;k<i;k++){
            if(a[k]==a[i]){
                visited=1;
                break;
            }
        }
        if(visited==0){
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                count=count+1;
            }
        }
        printf(" %d : %d \n",a[i],count);
        }
    }
    
}