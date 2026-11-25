///////////////////////////////////////////////////////////////
//
//   Function Name :  Pattern
//   Input         :  Integer
//   Output        :  Pattern
//   Description   :  Printing Pattern
//   Date          :  25/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 
 
#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = iNo; i >= 1; i--)
    {
        printf("%d # ", i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}