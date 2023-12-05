#include<stdio.h>
/*
Write a program in C to swap two numbers using a function.
Test Data :
Input 1st number : 2
Input 2nd number : 4
Expected Output :

Before swapping: n1 = 2, n2 = 4                                                  
After swapping: n1 = 4, n2 = 2 */
int PrintSwap( int n , int m){
    int temp = n;
    n = m;
    m = temp;
    return (n,m);

}
int main()
{
    int  a,b;
    printf("Input the number : ");
    scanf("%d",&a);
    printf("Input the number : ");
    scanf("%d",&b);

    printf("I the number : ,%d,%d",PrintSwap(a,b));
    return 0;

    

}