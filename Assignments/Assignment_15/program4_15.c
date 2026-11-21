///////////////////////////////////////////////////////////////
//
//   Function Name :  MultDigits
//   Input         :  Integer
//   Output        :  Integer
//   Description   :  Performing multiplication 
//   Date          :  21/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iMult = iMult * iDigit;

        iNo = iNo / 10;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d", iRet);

    return 0;
}