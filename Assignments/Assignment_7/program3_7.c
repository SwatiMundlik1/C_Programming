///////////////////////////////////////////////////////////////
//
//   Function Name :  Display
//   Input         :  Integer
//   Output        :  Integer
//   Description   :  Printing negative as well as positive
//                    numbers on screen
//   Date          :  06/11/2026
//   Author        :  Swati Vishnu Mundalik
//
///////////////////////////////////////////////////////////////  

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}