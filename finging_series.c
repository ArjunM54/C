/*
Find the 15th term of the series?
0,0,7,6,14,12,21,18, 28
*/

#include<stdio.h>
void main()
{
    int n, i;
    printf("Enter n: ");
    scanf("%d",&n);
    char arr[n];
    int odd = 1;
    int even = 1;
    for(i=1;i<=n;i++)
    {
        if(i==1 || i==2)
        {
            printf("0, ");
        }
        else if(i%2 != 0)
        {
            printf("%d, ",7*odd);
            odd++;
        }
        else
        {
            printf("%d, ",6*even);
            even++;
        }
    }
    if()
}