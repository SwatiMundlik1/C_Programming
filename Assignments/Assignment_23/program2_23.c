///////////////////////////////////////////////////////////////
//
//   Function Name :  ChkChar
//   Input         :  Character Array
//   Output        :  String
//   Description   :  Converting lowercase letters into
//                    uppercase
//   Date          :  26/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include <stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iCount++;
        }
        str++;
    }

    return iCount;
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

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d\n", iRet);

    return 0;
}