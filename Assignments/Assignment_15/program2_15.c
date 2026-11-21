///////////////////////////////////////////////////////////////
//
//   Function Name :  CountOdd
//   Input         :  Integer
//   Output        :  Integer
//   Description   :  Printing count of odd digits
//   Date          :  21/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 != 0)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);

    printf("%d", iRet);

    return 0;
}