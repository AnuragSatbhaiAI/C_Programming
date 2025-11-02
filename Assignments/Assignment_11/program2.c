/////////////////////////////////////////////////////////////////////////////////////////
//
//  2.Write a program which accept range from user and display all even numbers in 
//    between that range
//
//  Input  : 23  34                       
//  Output : 24  26  28  30  32  34                                                                                          
//
//  Input  : 10  18
//  Output : 10  12  14  16  18
//
//  Input  : 10  10
//  Output : 10
//
//  Input  : -10  2
//  Output : -10  -8  -6  -4  -2  0   2
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
//  Function Name : RangeDisplayEven
//  Description   : Displays even numbers in between given range
//  Input         : int,int
//  Output        : Range of even numbers
//  Author        : Anurag Gopal Satbhai
//  Date          : 02/11/25
//
//////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{

    int iCnt = 0;           

    if(iStart > iEnd)
    {
        printf("Invalid range...");
        return;
    }
    
    for(iCnt = iStart; iCnt <= iEnd; iCnt++ )               // Business Logic
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }
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

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////// 
//
//      Enter starting point : 10
//      Enter ending point : 15
//      10   12   14   
//
//      Enter starting point : 23
//      Enter ending point : 35
//      24   25   26   28   30   32   34
//
//      Enter starting point : 10
//      Enter ending point : 18
//      10   12   13   14   15   16   17   18
//
//      Enter starting point : -10
//      Enter ending point : 2
//      -10   -8   -6   -4  -2   0    2
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