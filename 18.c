//.C Program to count the total number of words in a string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "ranjeet";
    printf("\n Printing original string : %s",str);

    int total = strlen(str);
    printf("\nTotal length of the string are : %d",total);
    return 0;
}