///////////////////////////////////////////////////////////////
//
//   Function Name :  OddDisplay
//   Input         :  Integer
//   Output        :  Integer
//   Description   :  Printing odd numbers on screen
//   Date          :  06/11/2026
//   Author        :  Swati Vishnu Mundalik
//
///////////////////////////////////////////////////////////////  

#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}