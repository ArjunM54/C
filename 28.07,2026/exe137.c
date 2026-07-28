/*
1.	Factorial without Multiplication & Division
You are given a positive integer N. Your task is to compute the factorial of N without using any multiplication (∗)(∗) or division (/)(/) operators.
Factorial of a number N is defined as: N! = N×(N−1)×(N−2)×...×1N!=N×(N−1)×(N−2)×...×1.
Input Format
•	Get a single integer N, where N is the number for which you need to calculate the factorial.
Output Format
For each test case, output the factorial of the given number N.

*/
#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter a number to find factorial: ");
    scanf("%d",&n);

    int fact = n;
    int k = n-1;
    while(k>0){
        int sum=0;
        for(i=0;i<fact;i++)
        {
            sum = sum + k;
        }
        k=k-1;
        fact = sum;
    }
    printf("%d",fact);
}