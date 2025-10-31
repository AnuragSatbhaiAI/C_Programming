//////////////////////////////////////////////////////////////////////////////////////////
//
//  2.Accept single digit number from user and print it into word.
//
//  Input  : 9              -3              12
//  Output : Nine            Three          Invalid Number                                                       
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
//  Function Name : Display
//  Description   : Prints the number into the word
//  Input         : int
//  Output        : Prints number in word
//  Author        : Anurag Gopal Satbhai
//  Date          : 31/10/25
//
//////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{

    if(iNo < 0)                             // Updater
    {
        iNo = -iNo;
    }

    if(iNo == 0)                            // Business Logic
    {
        printf("Zero");
    }
    else if(iNo == 1)
    {
        printf("One");
    }
    else if(iNo == 2)
    {
        printf("Two");
    }
    else if(iNo == 3)
    {
        printf("Three");
    }
    else if(iNo == 4)
    {
        printf("Four");
    }
    else if(iNo == 5)
    {
        printf("Five");
    }
    else if(iNo == 6)
    {
        printf("Six");
    }
    else if(iNo == 7)
    {
        printf("Seven");
    }
    else if(iNo == 8)
    {
        printf("Eight");
    }
    else if(iNo == 9)
    {
        printf("Nine");
    }
    else
    {
        printf("Invalid Number..");
    }

}   // Time Complexity = O(1)     

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////
//
//      INPUT                                      OUTPUT 
//
//      -3                                         Three       
//      5                                          Five     
//      12                                         Invalid Number..
//
//////////////////////////////////////////////////////////////////////////////////////////