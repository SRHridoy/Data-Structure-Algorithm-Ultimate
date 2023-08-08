#include<stdio.h>

void SUBSTRING(char* str, int postition, int length)
{
    char substr[50];
    int j = 0;
    for (int i = postition; i < postition+length && str[i]!='\0'; i++)
    {
        substr[j++] = str[i];
    }
    substr[j] = '\0';
    
    printf("The substring is : %s \n", substr);
}

int main()
{
    char str[100];
    printf("Enter the value of str : ");
    fgets(str,sizeof(str),stdin);

    char substr[50];
    int postion, length;
    printf("Enter the position of the substring : ");
    scanf("%d", &postion);
    printf("Enter the length of the substring : ");
    scanf("%d", &length);

    SUBSTRING(str,postion,length);
}