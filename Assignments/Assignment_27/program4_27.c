///////////////////////////////////////////////////////////////
//
//   Function Name :  ChkVowel
//   Input         :  Character Array
//   Output        :  Boolean
//   Description   :  Checking at least one vowel from String
//   Date          :  26/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include <stdio.h>
#include <stdbool.h>

bool ChkVowel(char *str)
{
    // Logic
    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' ||
            *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' ||
            *str == 'O' || *str == 'U')
        {
            return true;
        }

        str++;
    }

    return false;
}

int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    bRet = ChkVowel(arr);

    if (bRet == true)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return 0;
}