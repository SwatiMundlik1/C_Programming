///////////////////////////////////////////////////////////////
//
//   Function Name :  strtogglex
//   Input         :  String
//   Output        :  Integer
//   Description   :  Returns index of first character or
//                    returns -1
//   Date          :  26/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include <stdio.h>

void strtogglex(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        str++;
    }
}

int main()
{
    char arr[50];

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    strtogglex(arr);

    printf("Modified string is: %s\n", arr);

    return 0;
}