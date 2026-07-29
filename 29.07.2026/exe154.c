//sorting an array using funtion.
#include<stdio.h>

int* sort(int *arr,int size)
{
    int i,j,temp;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr;
}

void main()
{
    int i,j,n;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Sorted array: ");
    sort(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}