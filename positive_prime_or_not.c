/*
6.Write a code to check whether no is prime or not. Condition use function check() to find 
whether entered no is positive or negative ,if negative then enter the no, And if yes pas no as 
a parameter to prime() and check whether no is prime or not?
Whether the number is positive or not, if it is negative then print the message “please enter the 
positive number”
It is positive then call the function prime and check whether the take positive number is prime or 
not. 
*/

#include<stdio.h>

void main()
{
    int n;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Check if it is prime or not.\n");
    }
    else{
        printf(" No, please enter a positive number.");
        return;
    }

    if((n%100!=0 && n%4==0) || n%400 == 0)
    {
        printf(" The positive number is a prime number.");
    }
    else
    {
        printf(" The positive number is not prime number.");
    }
}