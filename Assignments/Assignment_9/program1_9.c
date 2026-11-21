///////////////////////////////////////////////////////////////
//
//   Function Name :  Number
//   Input         :  Integer
//   Output        :  Pattern
//   Description   :  Printing Pattern
//   Date          :  21/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* ");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("# ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}