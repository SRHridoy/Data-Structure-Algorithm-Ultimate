#include<stdio.h>
#include<string.h>

int INDEXING(char* string, char* pattern)
{
    int i, j, k;
    int len = strlen(pattern);
    for (i = 0; string[i] != '\0'; i++)
    {
        k = i;
        for (j = 0; j < len; j++)
        {
            if(string[k] != pattern[j])
            {
                break;
            }
            k++;
        }
        if(j==len)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    char string[200];
    printf("Enter The string : ");
    //fgets(string,sizeof(string),stdin);
    gets(string);

    char pattern[100];
    printf("Enter The pattern : ");
    //fgets(pattern,sizeof(pattern),stdin);
    gets(pattern);

    int index = INDEXING(string,pattern);

    if(index>=0)
    {
        printf("The pattern is found at index : %d",index);
    }
    else
    {
        printf("The pattern is not found ");
    }
}