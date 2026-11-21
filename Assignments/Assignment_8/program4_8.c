///////////////////////////////////////////////////////////////
//
//   Function Name :  Number
//   Input         :  Integer
//   Output        :  Integer
//   Description   :  Printing table of given number
//   Date          :  21/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iCnt <= 10)
    {
        printf("%d\n", iNo * iCnt);
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}