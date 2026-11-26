///////////////////////////////////////////////////////////////
//
//   Function Name :  CountCapital
//   Input         :  Character Array
//   Output        :  Integer
//   Description   :  Display total number of uppercase 
//                    characters
//   Date          :  26/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include <stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    iRet = CountCapital(arr);

    printf("%d\n", iRet);

    return 0;
}