#include<stdio.h>

int Length(char* str)
{
    int len = 0;
    while (*str!='\0')
    {
        len++;
        str++;
    }
    return len;
}

int main()
{
    char str[100];
    printf("Enter the string : ");
    gets(str);

    int len = Length(str);
    printf("The length of the string %s is %d",str,len);
}