/*
1.	Given an integer array Arr of size N the task is to find the count of elements whose value is greater than all of its prior elements.
Note : 1st element of the array should be considered in the count of the result.
For example,
Arr[]={7,4,8,2,9}
As 7 is the first element, it will consider in the result.
8 and 9 are also the elements that are greater than all of its previous elements.
Since total of  3 elements is present in the array that meets the condition.
Hence the output = 3.
Example 1:
Input 
5 -> Value of N, represents size of Arr
7-> Value of Arr[0]
4 -> Value of Arr[1]
8-> Value of Arr[2]
2-> Value of Arr[3]
9-> Value of Arr[4]
Output :
3
*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,n;
    printf("Enter the size of the elements: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter array elements: \n");
    for(i=0;i<n;i++)
    {
        int *p=&a[i];
        printf("Enter the value of %d is: ",i);
        scanf("%d",p);
    }
    //print the array
    printf("[ ");
    for(i=0;i<n;i++){
        int *p=&a[i];
        printf("%d ",*p); 
    }
    printf("]");

    int *p1 = &a[0];
    int count=1;
    for(i=0;i<n;i++)
    {
        int *p2 = &a[i];
        if(*p1<*p2)
        {
            count = count+1;
        }
    }
    printf("\ncount is: %d",count);
}