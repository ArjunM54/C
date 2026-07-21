#include<stdio.h>

void main()
{
    int x,i,j,target,m;
    printf("Enter the element to delete: ");
    scanf("%d",&x);
    int a[]={1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);

    for(i=0;i<n;i++){
        if(x==a[i]){
            target = i;
            break;
        }
        else
        {
            printf("the number is not present");
        }
    }
    for(j=target+1;j<n;j++){
        a[j-1]=a[j];
    }
    n--;
    printf("\n");
    for(m=0;m<n;m++){
        printf("%d ",a[m]);
    }
}