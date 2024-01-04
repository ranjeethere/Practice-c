// string to concatinate two string
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10] = "ranjeet";
    char str2[10] = "yadav";

    printf("\nbefore concatination :%s",str1);
    printf("\nbefore concatination string two are : %s",str2);

    //after concatination 
    strcat(str1,str2);
    printf("\nafter using concatination : %s\n",str1);
    return 0;
}