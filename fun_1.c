#include<stdio.h>

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