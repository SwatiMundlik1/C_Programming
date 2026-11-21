///////////////////////////////////////////////////////////////
//
//   Function Name :  main
//   Input         :  String
//   Output        :  String
//   Description   :  Printing String
//   Date          :  21/11/2026
//   Author        :  Swati Vishnu Mundalik
//
/////////////////////////////////////////////////////////////// 

#include <stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name: ");
    scanf(" %[^\n]", Name);

    printf("Your name is %s", Name);

    return 0;
}