///////////////////////////////////////////////////////////////
//
//   Function Name :  FirstChar
//   Input         :  Character Array
//   Output        :  String
//   Description   :  Toggles Uppercase and Lowercase
//   Date          :  26/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include <stdio.h>

int FirstChar(char *str, char ch)
{
    int iIndex = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            return iIndex;
        }

        iIndex++;
        str++;
    }

    return -1;
}

int main()
{
    char arr[50];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf(" %49[^\n]", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}