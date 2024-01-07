//C Program to separate individual characters from a string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10] ="ranjeet";
    printf("\nOriginal string are %s",str);

    printf("\nPrinting the string:\n");
    for(int  i = 0;str[i]!= '\0';i++)
    {
        if(str[i]!=' '){
        printf("%c\n",str[i]);

    }

}
return 0;}