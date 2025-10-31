//////////////////////////////////////////////////////////////////////////////////////////
//
//  5.Write a program which returns difference between Even factorial and Odd factorial of
//    given number.
//
//  Input  : 5                                     -5
//  Output : -7 (8 - 15)                           -7 (8 - 15)                                                
//
//////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactorialDiff
//  Description   : It returns the factorial difference of the even odd factorial of 
//                  given number.
//  Input         : int
//  Output        : Returns factorial difference
//  Author        : Anurag Gopal Satbhai
//  Date          : 31/10/25
//
//////////////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{

    if(iNo < 0)                                  // Updater
    {
        iNo = - iNo;
    }

    int iCnt = 0;
    int iFactOdd = 1;
    int iFactEven = 1;

    for(iCnt = iNo; iCnt >= 1; iCnt--)           // Business Logic
    {   
        if((iCnt % 2) != 0)
        {
            iFactOdd = iFactOdd * iCnt;
        }
        else
        {
            iFactEven = iFactEven * iCnt;
        }
    }

    return iFactEven - iFactOdd;
    
}   // Time Complexity = O(n)     

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////
//
//      INPUT                                      OUTPUT 
//
//      5                                           -7       
//     -5                                           -7     
//      10                                           2895
//
//////////////////////////////////////////////////////////////////////////////////////////