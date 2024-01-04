//C Program to compare two strings
#include<string.h>
#include<stdio.h>
int main()
{
    char str1[10] = "ranjeet";
    char str2[10] = "yadav";

    //comparing two string using string library function..
    int data = strcmp(str1,str2);
    if(data == 0)
    {
        printf("Both string are same");

    }
    else {
        printf("Both string are not same:");
    }

    printf("\nPrinting the value of string : %d",data);
    return 0;
} 
