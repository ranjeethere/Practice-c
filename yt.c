#include<stdio.h>

void swapV(int *, int *);
int main()
{
    int a =  10, b = 20;
    swapV(&a,&b);
    printf("The value of swap are :%d %d",a,b);
    return 0;

}
void swapV(int *x , int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y =t;
    //printf("The value of swap are :%d%d",*x,*y);
    //return x,y;
}