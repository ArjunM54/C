/*
5.	Selection of MPCS exams include a fitness test which is conducted on ground. 
There will be a batch of 3 trainees, appearing for running test in track for 3 rounds. 
You need to record their oxygen level after every round. After trainee are finished with all rounds, 
calculate for each trainee his average oxygen level over the 3 rounds and select one with 
highest oxygen level as the most fit trainee. If more than one trainee attains the same 
highest average level, they all need to be selected.
Display the most fit trainee (or trainees) and the highest average oxygen level.
Note:
•	The oxygen value entered should not be accepted if it is not in the range between 1 and 100.
•	If the calculated maximum average oxygen value of trainees is below 70 then declare 
    the trainees as unfit with meaningful message as “All trainees are unfit.
•	Average Oxygen Values should be rounded.
Example 1:
INPUT VALUES
95
92
95
92
90
92
90
92
90
OUTPUT VALUES
Trainee Number : 1
Trainee Number : 3
*/
#include<stdio.h>
int main()
{
    int i,j;
    int a[3][3];
    float avg[i];
    float max;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);

            if((a[i][j]<0)||(a[i][j]>100))
            {
                printf("Invalid number");
                return 0;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        int sum = 0;
        for(j=0;j<3;j++)
        {
            sum += a[i][j];
        }
        avg[i] = (sum+1)/3 ;
    }
    max = avg[0];
    for(i=0;i<3;i++)
    {
        if(max<avg[i])
        {
            max = avg[i];
        }
    }

    if(max<70)
    {
        printf("All trinees are unfit");
    }
    else{
        for(i=0;i<3;i++)
        {
            if(max==avg[i])
            {
                printf("Trainee Number : %d\n", i + 1);
            }
        }
    }
    return 0;
}