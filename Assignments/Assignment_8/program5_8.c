///////////////////////////////////////////////////////////////
//
//   Function Name :  Number
//   Input         :  Integer
//   Output        :  Integer
//   Description   :  Printing table in reverse order
//   Date          :  21/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 10;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iCnt >= 1)
    {
        printf("%d\n", iNo * iCnt);
        iCnt--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}