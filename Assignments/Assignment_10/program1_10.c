///////////////////////////////////////////////////////////////
//
//   Function Name :  Number
//   Input         :  Float
//   Output        :  Double
//   Description   :  Calculating area of Circle
//   Date          :  21/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is: %lf\n", dRet);

    return 0;
}