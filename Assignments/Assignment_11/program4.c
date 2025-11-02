/////////////////////////////////////////////////////////////////////////////////////////
//
//  4.Write a program which accept range from user and return addition of all even 
//    numbers in between that range. (Range should contains positive numbers only)
//
//  Input  : 23  30                       
//  Output : 108                                                                                          
//
//  Input  : 10  18
//  Output : 70
//
//  Input  : -10  2
//  Output : Invalid range
//
//  Input  : 90  18
//  Output : Invalid range
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
//  Function Name : RangeSumEven
//  Description   : Returns the sum of all even numbers in the given range
//  Input         : int,int
//  Output        : int
//  Author        : Anurag Gopal Satbhai
//  Date          : 2/11/25
//
//////////////////////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{

    int iCnt = 0; 
    int iSum = 0;          

    if ((iStart > iEnd) || (iStart <= 0) || (iEnd <= 0))
    {
        return -1;
    }
    
    for(iCnt = iStart; iCnt <= iEnd; iCnt++ )               // Business Logic
    {
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
   

}   // Time Complexity = O(n)     

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    if(iRet == -1)
    {
        printf("Invalid Range...");
    }
    else
    {
        printf("Even number addition is %d",iRet);
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////// 
//
//      Enter starting point : 10
//      Enter ending point : 15
//      Even number addition is 36   
//
//      Enter starting point : 23
//      Enter ending point : 30
//      Even number addition is 108
//
//      Enter starting point : 10
//      Enter ending point : 18
//      Even number addition is 70
//
//      Enter starting point : -10
//      Enter ending point : 2
//      Invalid range...
//
//      Enter starting point : 90
//      Enter ending point : 18
//      Invalid range...
//
//
//////////////////////////////////////////////////////////////////////////////////////////