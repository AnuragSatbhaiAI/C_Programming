
/*
   vvvimp...
    Step 1 : Understand the problam statment
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program

*/

/*

    Algorithm

    START
        Accept first number as no1
        Accept second number as no2
        If the input is negative then convert it in positive
        Perform addition of no1 and no2
        Display the addition on screen
    STOP
*/

///////////////////////////////////////////////////////////////////////////////
//
//  Required Header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Desription :    It is used to perform addition
//  Input :         Float, Float
//  Output :        Float
//  Author :        Anurag Gopal Satbhai
//  Date :          09/10/2025
//
///////////////////////////////////////////////////////////////////////////////


float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f; 
    //Updater
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }
    //Updater
    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;  //Business logic
    return fSum;

}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////


int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;     

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter second number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);

    printf("Addition is : %f\n",fRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
//  Input1 : 10.2       Input2 : 5.3        Output : 15.5
//  Input1 : -10.2      Input2 : 5.3        Output : 15.5
//  Input1 : 10.2       Input2 : -5.3       Output : 15.5
//  Input1 : -10.2      Input2 : -5.3       Output : 15.5
//  Input1 : 10         Input2 : 0          Output : 10
//
///////////////////////////////////////////////////////////////////////////////
