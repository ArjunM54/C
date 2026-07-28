/*
3.	At a fun fair, a street vendor is selling different colours of balloons. 
He sells N number of different colours of balloons (B[]). The task is to find the 
colour (odd) of the balloon which is present odd number of times in the bunch of balloons.
Note: If there is more than one colour which is odd in number, then the first colour in the array 
which is present odd number of times is displayed. The colours of the balloons can 
all be either upper case or lower case in the array. If all the inputs are even in number, 
display the message “All are even”.
Example 1:
•	7  -> Value of N
•	[r,g,b,b,g,y,y]  -> B[] Elements B[0] to B[N-1], where each input element is sepārated by ṉew line.
Output :
•	r -> [r,g,b,b,g,y,y]  -> “r” colour balloon is present odd number of times in the bunch.
Explanation:
From the input array above:
•	r: 1 balloon 
•	g: 2 balloons
•	b:  2 balloons
•	y : 2 balloons
Hence , r is only the balloon which is odd in number.
*/

#include<stdio.h>
#include<ctype.h>

void main()
{
    int n,i,j;
    int found = 0;
    printf("enter n:");
    scanf("%d",&n);
    char B[n];
    char A[n];
    printf("Enter color:");
    for(i=0;i<n;i++)
    {
        scanf(" %c",&B[i]);
    }

    printf("Entered colors:\n");
    for(i=0;i<n;i++)
    {
        printf(" %c",B[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        int count = 0;
        for(j=0;j<n;j++)
        {
            if(B[i]==B[j])
            {
                count +=1;
            }
        }
        int first = 1;
        if(count%2!=0)
        {
            for(j=0;j<i;j++)
            {
                if(B[j]==B[i])
                {
                    first = 0;
                    break;
                }
            }
            if(first)
            {
                printf("%c is odd\n",B[i]);
                found =1;
            }
        }
    }
    if(found == 0)
    {
        printf("All are even.");
    }
}