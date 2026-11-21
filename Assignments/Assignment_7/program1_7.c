///////////////////////////////////////////////////////////////
//
//   Function Name :  Pattern
//   Input         :  Integer
//   Output        :  Pattern
//   Description   :  Printing pattern on screen
//   Date          :  06/11/2026
//   Author        :  Swati Vishnu Mundalik
//
///////////////////////////////////////////////////////////////  

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}