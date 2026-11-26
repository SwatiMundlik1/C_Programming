///////////////////////////////////////////////////////////////
//
//   Function Name :  DisplayDigit
//   Input         :  String
//   Output        :  Integer
//   Description   :  Returns index of last character or
//                    returns -1 
//   Date          :  26/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include <stdio.h>

void DisplayDigit(char *str)
{
    while (*str != '\0')
    {
        if (*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
        }

        str++;
    }
}

int main()
{
    char arr[50];

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    DisplayDigit(arr);

    return 0;
}