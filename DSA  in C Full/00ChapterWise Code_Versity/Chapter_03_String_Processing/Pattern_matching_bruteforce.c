// #include<stdio.h>
// #include<stdbool.h>
// #include"Length.h"

// int PATTERN_MATCHING_BRUTE(char *main, char *pattern)
// {
//     int lm = LENGTH(main);
//     int lp = LENGTH(pattern);
//     int max = lm - lp + 1;
//     for (int i = 1; i <= max; i++)
//     {
//         bool flag = true;
//         for (int j = 1; j <= lp; j++)
//         {
//             if(main[i]!=pattern[i+j-1])
//             {
//                 flag = false;
//                 break;
//             }
//         }
//         if(flag==true)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     char main[100];
//     char pattern[50];

//     int mainS;
//     printf("\n Enter the size of the main text : ");
//     scanf("%d",&mainS);
//     printf("\nEnter the Main Text : ");
//     for (int i = 1; i <= mainS; i++)
//     {
//         scanf("%c",&main[i]);
//     }
    
//     int patS;
//     printf("\n Enter the size of the Pattern : ");
//     scanf("%d",&patS);
//     printf("\nEnter the Pattern you want to match : ");
//     for (int i = 1; i <= patS; i++)
//     {
//         scanf("%c",&pattern[i]);
//     }

//     int index = PATTERN_MATCHING_BRUTE(main,pattern);

//     printf("\nPattern found at index : ", index);

// }

#include <stdio.h>
#include <stdbool.h>
#include "Length.h"

int PATTERN_MATCHING_BRUTE(char *main, char *pattern)
{
    int lm = LENGTH(main);
    int lp = LENGTH(pattern);
    int max = lm - lp + 1;
    for (int i = 0; i < max; i++)
    {
        bool flag = true;
        for (int j = 0; j < lp; j++)
        {
            if (main[i + j] != pattern[j])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            return i;
        }
    }
    return -1; // Pattern not found
}

int main()
{
    char main[100];
    char pattern[50];

    int mainS;
    printf("\nEnter the size of the main text : ");
    scanf("%d", &mainS);
    printf("Enter the Main Text : ");

    // Consume the newline character left in the input buffer
    getchar();

    for (int i = 0; i < mainS; i++)
    {
        scanf("%c", &main[i]);
    }

    int patS;
    printf("\nEnter the size of the Pattern : ");
    scanf("%d", &patS);
    printf("Enter the Pattern you want to match : ");

    // Consume the newline character left in the input buffer
    getchar();

    for (int i = 0; i < patS; i++)
    {
        scanf("%c", &pattern[i]);
    }

    int index = PATTERN_MATCHING_BRUTE(main, pattern);

    if (index != -1)
    {
        printf("\nPattern found at index : %d\n", index);
    }
    else
    {
        printf("\nPattern not found.\n");
    }

    return 0;
}
