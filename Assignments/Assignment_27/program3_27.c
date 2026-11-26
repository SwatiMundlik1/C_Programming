///////////////////////////////////////////////////////////////
//
//   Function Name :  Difference
//   Input         :  Character Array
//   Output        :  Integer
//   Description   :  Display difference between uppercase and 
//                    lowercase frequencies
//   Date          :  26/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include <stdio.h>

int Difference(char *str)
{
    int iSmall = 0;
    int iCapital = 0;

    // Filter and Logic
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }

        str++;
    }

    return iSmall - iCapital;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    iRet = Difference(arr);

    printf("%d\n", iRet);

    return 0;
}