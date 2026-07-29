//4.Write a program in C to print all perfect numbers in a given range using the function.
#include<stdio.h>

void perf(int n)
{
    int i,j;
    
    for(i=1;i<n;i++){
        int sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i)
        {
            printf("%d is perfect number.\n",i);
        }
    }
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    perf(n);
    return 0;
}