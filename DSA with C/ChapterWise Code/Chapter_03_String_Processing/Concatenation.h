// #include<stdio.h>

char* CONCATENATION(char* str1, char* str2)
{
    //Storing starting postion of str1 :
    char *storeStr1 = str1;

    // Move str1 pointer to the end of the first string
    while (*str1 != '\0')
    {
        str1++;
    }
    //Copy str2 to str1
    while (*str2 != '\0')
    {
        *str1++ = *str2++;
    }
    //Adding Null Char , it is important...
    *str1 = '\0';

    return storeStr1;
}

// int main()
// {
//     char str1[200];
//     printf("Enter the first string : ");
    
//     //If we use fgets then it will add a newline charecter after input so then the concatinated string will be in 2 lines....
//     //fgets(str1,sizeof(str1),stdin);
//     gets(str1);

//     char str2[100];
//     printf("Enter the second string : ");
//     //fgets(str2,sizeof(str2),stdin);
//     gets(str2);

//     char *concatenated = Concatenation(str1, str2);
//     printf("After concatenation : %s", concatenated);
// }