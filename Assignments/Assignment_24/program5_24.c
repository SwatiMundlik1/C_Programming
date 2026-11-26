///////////////////////////////////////////////////////////////
//
//   Function Name :  CountWhite
//   Input         :  String
//   Output        :  String
//   Description   :  Reverses string by swapping characters
//                    from beginning and end
//   Date          :  26/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include <stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces: %d\n", iRet);

    return 0;
}