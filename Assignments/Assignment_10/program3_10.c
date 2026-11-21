///////////////////////////////////////////////////////////////
//
//   Function Name :  Number
//   Input         :  Integer
//   Output        :  Integer
//   Description   :  Converting km into meter
//   Date          :  21/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in kilometre: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is: %d\n", iRet);

    return 0;
}