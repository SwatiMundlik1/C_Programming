///////////////////////////////////////////////////////////////
//
//   Function Name :  CountOdd
//   Input         :  Integer, Integer
//   Output        :  Pattern
//   Description   :  Printing Pattern
//   Date          :  25/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNum = 1;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0)
        {
            iNum = 2;
        }
        else
        {
            iNum = 1;
        }

        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iNum);
            iNum = iNum + 2;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}