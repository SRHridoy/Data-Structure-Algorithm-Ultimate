#include<stdio.h>
#include</home/hridoy-pgmr/DSA Ultimate/DSA with C/ChapterWise Code/Chapter_03_String_Processing/Length.h>
#include</home/hridoy-pgmr/DSA Ultimate/DSA with C/ChapterWise Code/Chapter_03_String_Processing/Substring.h>
#include</home/hridoy-pgmr/DSA Ultimate/DSA with C/ChapterWise Code/Chapter_03_String_Processing/Concatenation.h>


char* INSERT(char* main,int position, char* insert){

    char *str1 = SUBSTRING(main,1,position-1);
    char *str2 = SUBSTRING(main,position,LENGTH(main)-(position-1));

    char *concatenatedStr = CONCATENATION(str1,insert);
    concatenatedStr = CONCATENATION(concatenatedStr,str2);
    
    return concatenatedStr;
}

int main()
{
    char mainString[100];
    char insertStr[100];
    int position;

    printf("Enter the main string : ");
    gets(mainString);

    printf("Enter the  another string to insert : ");
    gets(insertStr);

    printf("Enter the postion to insert the string : ");
    scanf("%d",&position);

    char *Inserted = INSERT(mainString,position,insertStr);
    printf("After Insertion the final string is  : " );
    puts(Inserted);
}