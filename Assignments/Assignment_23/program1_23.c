///////////////////////////////////////////////////////////////
//
//   Function Name :  ChkChar
//   Input         :  Character Array
//   Output        :  String
//   Description   :  Converting uppercase letters into
//                    lowercase
//   Date          :  26/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while (*str != '\0')
    {
        if (*str == ch)
        {
            return TRUE;
        }
        str++;
    }

    return FALSE;
}

int main()
{
    char arr[50];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string: ");
    scanf(" %49[^\n]", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if (bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}