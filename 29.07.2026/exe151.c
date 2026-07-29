//3.Write a program in C to check Armstrong and Perfect numbers using the function.
#include<stdio.h>
#include<math.h>
void amg(int n)
{
    int count =0;
    int i,j;
    int temp=n;
    int rem,Armstrong=0;
    while(temp>0)
    {
        temp = temp/10;
        count++;
    }
    temp = n;
    for(i=0;i<n;i++)
    {
        rem = temp%10;
        Armstrong += pow(rem,count);
        temp = temp/10;
    }
    if(Armstrong==n)
    {
        printf("Amstrong number.");
    }
    else
    {
        printf("Not Amstrong.");
    }
}

void per(int n)
{
    int i;
    int sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("\nPerfect number.");
    }
    else{
        printf("\nNot a perfect number.");
    }
}

int main()
{
    int n,m;
    printf("Enter a  number to find amgstrong: ");
    scanf("%d",&n);
    printf("Enter a  number to find perfect number: ");
    scanf("%d",&m);
    amg(n);
    per(m);

    return 0;
}