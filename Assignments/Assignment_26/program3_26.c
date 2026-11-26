///////////////////////////////////////////////////////////////
//
//   Function Name :  Display
//   Input         :  Character
//   Output        :  Character
//   Description   :  Display characters uppercase to z and 
//                    lowercase in reverse order to a
//   Date          :  26/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include <stdio.h>

void Display(char ch)
{
    char cCnt = '\0';

    if (ch >= 'A' && ch <= 'Z')
    {
        for (cCnt = ch; cCnt <= 'Z'; cCnt++)
        {
            printf("%c ", cCnt);
        }
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        for (cCnt = ch; cCnt >= 'a'; cCnt--)
        {
            printf("%c ", cCnt);
        }
    }
    else
    {
        return;
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