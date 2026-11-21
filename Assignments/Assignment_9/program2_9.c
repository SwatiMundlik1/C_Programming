///////////////////////////////////////////////////////////////
//
//   Function Name :  Number
//   Input         :  Integer
//   Output        :  Integer
//   Description   :  Printing dollar in rupees
//   Date          :  21/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iAns = 0;

    iAns = iNo * 70;

    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter amount in USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d", iRet);

    return 0;
}