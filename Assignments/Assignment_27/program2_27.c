///////////////////////////////////////////////////////////////
//
//   Function Name :  CountSmall
//   Input         :  Character Array
//   Output        :  Integer
//   Description   :  Display total number of uppercase 
//                    characters
//   Date          :  26/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include <stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    // Filter
    while (*str != '\0')
    {
        // Logic
        if (*str >= 'a' && *str <= 'z')
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

    iRet = CountSmall(arr);

    printf("%d\n", iRet);

    return 0;
}
int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    Display(cValue);

    return 0;
}