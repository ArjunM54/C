//binary to decimal
//decimal to octal
#include<stdio.h>
#include<math.h>
void main(){
    int n,i,j,num=0,x,rem;
    printf("Enter n(binary):");
    scanf("%d",&n);

    while(n>0){
        rem=n%10;
        if(rem==1){
            num=num+(int)(pow(2,i));
        }
        n=n/10;
        i++;
    }
    printf("%d",num);

    int a[100];
    int index=0;
    //decimal to oclat
    while(num>0){
        x=num%8;
        a[index]=x;
        num/=8;
        index++;
    }
    printf("\n");
    for(i=index-1;i>=0;i--){
        printf("%d",a[i]);
    }
}