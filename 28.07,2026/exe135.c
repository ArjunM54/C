#include<stdio.h>
#include<string.h>

void main()
{
    int i,j,n,k=0;
    char a[100],b[100];
    printf("Enter letters to count: ");
    scanf("%s",&a);

    for(i=0;a[i]!='\0';i++)
    {
        int count = 0;
        for(j=i;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                count += 1;
            }
            else if(a[i]!=a[j])
            {
                break;
            }
        }
        b[k] = a[i];
        b[k+1] = count + '0';
        k=k+2;

        i=i+count-1;
        b[k]='\0';
    }
    for(i=0;b[i]!='\0';i++)
    {
        printf("%c",b[i]);
    }
}