///////////////////////////////////////////////////////////////
//
//   Function Name :  CountTwo
//   Input         :  Integer
//   Output        :  Integer
//   Description   :  Counting frequency of 2
//   Date          :  21/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include<stdio.h>

int CountTwo(int iNo)
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

        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("%d", iRet);

    return 0;
}