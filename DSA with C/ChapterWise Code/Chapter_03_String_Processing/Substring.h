char* SUBSTRING(char* str, int postition, int length)
{
    char substr[50];
    int j = 0;
    for (int i = postition; i < postition+length && str[i]!='\0'; i++)
    {
        substr[j++] = str[i];
    }
    substr[j] = '\0';
    
    //printf("The substring is : %s \n", substr);
    return substr;
}