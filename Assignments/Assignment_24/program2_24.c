///////////////////////////////////////////////////////////////
//
//   Function Name :  struprx
//   Input         :  String
//   Output        :  Integer
//   Description   :  Display Frequency of character
//   Date          :  26/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include <stdio.h>

void struprx(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
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

    struprx(arr);

    printf("Modified string is: %s\n", arr);

    return 0;
}