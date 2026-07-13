#include<stdio.h>

enum day
{
    MON=1,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};
void main()
{
    enum day today = MON;
    printf("%d",today);
}
