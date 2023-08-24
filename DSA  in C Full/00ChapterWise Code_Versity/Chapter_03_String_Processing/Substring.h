// char* SUBSTRING(char* str, int postition, int length)
// {
//     char substr[50];
//     int j = 0;
//     for (int i = postition; i < postition+length && str[i]!='\0'; i++)
//     {
//         substr[j++] = str[i];
//     }
//     substr[j] = '\0';
    
//     //printf("The substring is : %s \n", substr);
//     return substr;
// }
#include<stdlib.h>
char* SUBSTRING(char* str, int position, int length)
{
    char* substr = (char*)malloc(length + 1); // +1 for the null terminator
    if (substr == NULL)
    {
        // Handle memory allocation failure
        return NULL;
    }

    int j = 0;
    for (int i = position; i < position + length && str[i] != '\0'; i++)
    {
        substr[j++] = str[i];
    }

    substr[j] = '\0';
    return substr;
}
