#include <stdio.h>

int main()
{
    int i, j, n;
    int a[100];
    printf("Enter n:");
    scanf("%d",&n);
    printf("enter element:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count = 0;
    int visited[n];

    for(i = 0; i < n; i++)
        visited[i] = 0;

    for(i = 0; i < n; i++)
    {
        if(visited[i] == 1)
            continue;

        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                visited[j] = 1;
                count++;
                break;    
            }
        }
    }

    printf("Duplicate count = %d", count);

    return 0;
}