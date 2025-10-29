//////////////////////////////////////////////////////////////////////////////////////////
//
//  5.Write a program which accept three numbers and print it's multiplication.
//
//  Input                                       Output
//  5  7  4                                       140
//  5  0  7                                       35
//  5  0  0                                       5
//  0  0  0                                       0
//
//////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Description   : Calculates the multiplication of three numbers
//  Input         : int, int, int
//  Output        : int
//  Author        : Anurag Gopal Satbhai
//  Date          : 29/10/25
//
//////////////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
 
    int iMult = 1;


        if (iNo1 != 0 )
        {
            iMult = iMult * iNo1;
        }
        if (iNo2 != 0)
        {
            iMult = iMult * iNo2;
        }
        if (iNo3 != 0)
        {
            iMult = iMult * iNo3;
        }

        if (iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
        {
            iMult = 0;
        }

    return iMult;

}      

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers : ");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("%d",iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////
//
//      INPUT                                      OUTPUT 
//
//      5  4  7                                    140
//      5  0  7                                    35
//      5  0  0                                    5
//      0  0  0                                    0
//
//////////////////////////////////////////////////////////////////////////////////////////