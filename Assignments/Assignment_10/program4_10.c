///////////////////////////////////////////////////////////////
//
//   Function Name :  Number
//   Input         :  Float
//   Output        :  Double
//   Description   :  Converting Fahrenheit temperature into 
//                    celcius
//   Date          :  21/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = (fTemp - 32) * (5.0 / 9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is: %lf\n", dRet);

    return 0;
}