///////////////////////////////////////////////////////////////
//
//   Function Name :  Pattern
//   Input         :  Integer
//   Output        :  Pattern
//   Description   :  Printing Pattern
//   Date          :  25/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include<stdio.h>

void Pattern()
{
    int i = 0, j = 0;

    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= 4; j++)
        {
            printf("%d ", i + j - 1);
        }
        printf("\n");
    }
}

int main()
{
    Pattern();

    return 0;
}