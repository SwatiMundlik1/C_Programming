///////////////////////////////////////////////////////////////
//
//   Function Name :  DisplayASCII
//   Input         :  No input
//   Output        :  Integer
//   Description   :  Display ASCII table
//   Date          :  26/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include <stdio.h>

void DisplayASCII()
{
    int i;

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
    printf("---------------------------------------------\n");

    for (i = 0; i <= 255; i++)
    {
        if (i >= 32 && i <= 126)
        {
            printf("%c\t", i);
        }
        else
        {
            printf(" \t");
        }

        printf("%d\t%X\t\t%o\n", i, i, i);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}