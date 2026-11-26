///////////////////////////////////////////////////////////////
//
//   Function Name :  strlwrx
//   Input         :  String 
//   Output        :  Boolean
//   Description   :  Returns TRUE if character found
//   Date          :  26/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include <stdio.h>

void strlwrx(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[50];

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    strlwrx(arr);

    printf("Modified string is: %s\n", arr);

    return 0;
}