///////////////////////////////////////////////////////////////
//
//   Function Name :  StrRevX
//   Input         :  Character Array
//   Output        :  Integer
//   Description   :  Counting white spaces and display count
//   Date          :  26/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include <stdio.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    // Move end pointer to the last character
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
}

int main()
{
    char arr[50];

    printf("Enter string: ");
    scanf(" %49[^\n]", arr);

    StrRevX(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}