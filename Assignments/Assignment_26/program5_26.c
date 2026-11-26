///////////////////////////////////////////////////////////////////
//
//   Function Name :  Display
//   Input         :  Character
//   Output        :  Integer 
//   Description   :  Display ASCII value of character in decimal
//                    octal and hexadecimal formats
//   Date          :  26/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////////// 

#include <stdio.h>

void Display(char ch)
{
    printf("Decimal: %d\n", ch);
    printf("Octal: %o\n", (unsigned char)ch);
    printf("Hexadecimal: 0X%X\n", (unsigned char)ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    Display(cValue);

    return 0;
}