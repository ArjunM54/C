#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,1};
    int i, j;
    int n = sizeof(arr) / sizeof(arr[0]);
    int flag = 1;

    for(i = 0, j = n - 1; i < j; i++, j--)
    {
        if(arr[i] != arr[j])
        {
            flag = 0;
            break;
        }
    }
    if(flag){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}