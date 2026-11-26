///////////////////////////////////////////////////////////////////
//
//   Function Name :  Reverse
//   Input         :  Character Array
//   Output        :  Void
//   Description   :  Display string in reverse order
//   Date          :  26/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////////// 

#include <stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    // Find the last character
    while (*end != '\0')
    {
        end++;
    }
    end--;

    // Reverse the string
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reverse string: %s\n", str);
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    Reverse(arr);

    return 0;
}