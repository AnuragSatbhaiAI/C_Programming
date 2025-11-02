/////////////////////////////////////////////////////////////////////////////////////////
//
//  5.Write a program which accept range from user and display all numbers in between
//    that range in reverse order.
//
//  Input  : 23  34                       
//  Output : 34  33  32  31  30  29  28  27  26  25  24  23                                                                                         
//
//  Input  : 10  18
//  Output : 18  17  16  15  14  13  12  10
//
//  Input  : 10  10
//  Output : 10
//
//  Input  : -10  2
//  Output : 2  1   0   -1  -2  -3  -4  -5  -6  -7  -8  -9  -10
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
//  Function Name : RangeDisplayRev
//  Description   : Displays numbers in between given range in reverse order
//  Input         : int,int
//  Output        : Range numbers in reverse
//  Author        : Anurag Gopal Satbhai
//  Date          : 02/11/25
//
//////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{

    int iCnt = 0;           

    if(iStart > iEnd)
    {
        printf("Invalid range...");
        return;
    }
    
    for(iCnt = iEnd; iCnt >= iStart; iCnt-- )               // Business Logic
    {
        printf("%d\t",iCnt);
    }
   

}   // Time Complexity = O(n)     

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////// 
//
//      Enter starting point : 10
//      Enter ending point : 15
//      15  14  13  12  11  10    
//
//      Enter starting point : 23
//      Enter ending point : 34
//      34  33  32  31  30  29  28  27  26  25  24  23
//
//      Enter starting point : 10
//      Enter ending point : 18
//      18  17  16  15  14  13  12  10
//
//      Enter starting point : -10
//      Enter ending point : 2
//      2  1   0   -1  -2  -3  -4  -5  -6  -7  -8  -9  -10
//
//      Enter starting point : 90
//      Enter ending point : 18
//      Invalid range...
//
//      Enter starting point : 10
//      Enter ending point : 10
//      10
//
//
//////////////////////////////////////////////////////////////////////////////////////////