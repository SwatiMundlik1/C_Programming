///////////////////////////////////////////////////////////////
//
//   Function Name :  Display
//   Input         :  Character
//   Output        :  Character
//   Description   :  Display Uppercase for lowercase and 
//                    lowercase for uppercase
//   Date          :  26/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include <stdio.h>

void Display(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c", ch - 32);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c", ch + 32);
    }
    else
    {
        printf("%c", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    Display(cValue);

    return 0;
}