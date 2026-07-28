/*
3.	Count Character Occurrences
You are given two strings, str1 and str2. Your mission is to calculate the total number 
of occurrences of each unique character of str2 within the string str1. 
The task is to find the sum of occurrences of all unique characters from str2 in 
str1 and return this total count.
Input Format
o	The first line contains the string str1.
o	The second line contains the string str2.
Output Format
For each test case, output the total sum of occurrences of characters in str2 found in str1 on a new line.
Sample
Input
helloworld
do
Output
3
Input
abacabadabacaba
abcd
Output
15

*/
#include<stdio.h>
void main()
{
    int i,j,n;
    char a[100];
    scanf("%s",&a);
    char b[100];
    scanf("%s",&b);
    printf("\n");
    printf("Str1: ");
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
    printf("Str2: ");
    for(i=0;b[i]!='\0';i++)
    {
        printf("%c",b[i]);
    }
    printf("\n");
    int count = 0;
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;b[j]!='\0';j++)
        {
            if(b[j]==a[i])
            {
                count += 1;
            }
        }
    }
    printf("%d",count);
}