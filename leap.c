#include<stdio.h>
// find out the given year is leap year or not 
int main()
{
    int n;
    printf("Input the year :");
    scanf("%d",&n);

    if((n%400==0 && n%4 == 0)||(n%100!== 0))
    {
        printf("It is a leap year :");
    }
    else 
    {
        printf("It is not a leap year:");
    }
    return 0;
}