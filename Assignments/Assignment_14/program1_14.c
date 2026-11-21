///////////////////////////////////////////////////////////////
//
//   Function Name :  DisplayDigit
//   Input         :  Integer
//   Output        :  Integer
//   Description   :  Printing digits in reverse order
//   Date          :  21/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}