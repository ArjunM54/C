/*
4.	Good Number
You are given a number N, and your task is to determine whether it is a "Good Number" or not. A Good Number is defined as a number that is divisible by the sum of its own digits. If the number is divisible by the sum of its digits, it is classified as Good, otherwise, it is classified as Bad.
Input Format
•	Each test case contains a single integer N, the number you need to check.
Output Format
For each test case, print "Good Number" if the number is a Good, otherwise print "Bad Number".
Sample Input
18
Output
Good number
Input 
19
Output
Bad number
*/
#include<stdio.h>
void main()
{
    int i,n,dig;
    printf("Enter a number: ");
    scanf("%d",&n);
    int temp=n;
    int sum = 0;
    while(n>0)
    {
        dig = n%10;
        sum=sum+dig;
        n = n/10;
    }
    if(temp%sum==0)
    {
        printf("Good Number");
    }
    else{
        printf("Bad Number");
    }
}