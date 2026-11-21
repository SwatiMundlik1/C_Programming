///////////////////////////////////////////////////////////////
//
//   Function Name :  MultipleDisplay
//   Input         :  Integer
//   Output        :  Integer
//   Description   :  Printing first multiple of N on screen
//   Date          :  06/11/2026
//   Author        :  Swati Vishnu Mundalik
//
///////////////////////////////////////////////////////////////  

#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        {
            printf("%d\t",iNo * iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}