///////////////////////////////////////////////////////////////
//
//   Function Name :  Number
//   Input         :  Integer
//   Output        :  Double
//   Description   :  Converting area into square feet
//   Date          :  21/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include<stdio.h>

double SquareMeter(int iValue)
{
    double dMeter = 0.0;

    dMeter = iValue * 0.0929;

    return dMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is: %lf\n", dRet);

    return 0;
}