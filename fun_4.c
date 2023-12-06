//Write a program in C to check if a given number is even or odd using the function
#include<stdio.h>

int PrintOddEven(int n)
{
    if(n%2==0)
    {
        printf("The entered number is even");
    }
    else{
        printf("The entered number is odd");

    }
    return 0;
}
int main()
{
    int a;
    printf("Input any number :");
    scanf("%d",&a);
    //int R =PrintOddEven(a);
    printf(PrintOddEven(a));
}