#include<stdio.h>
/*
1. Write a program in C to show the simple structure of a function.
Expected Output :

The total is :  11 */

int Print(int a , int b )
{
   return a+b;

}

int main()
{
    //int n = 11;
    int op = Print( 6 , 5);
    printf(" The total is : %d\n",op);
    return 0;

}