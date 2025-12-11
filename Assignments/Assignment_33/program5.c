/////////////////////////////////////////////////////////////////////////////////////////
//
//  5.Accept division of student from user and depends on the division display exam timing.
//    There are 4 divisions in school as A,B,C and D. Exam of division A @ 7am, B @ 8:30am,
//    C @ 9:20 and D @ 10:30am. (Application should be case insensitive)
//
//    Input  : C        
//
//    Output : your exam at 9:20 AM.
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
//  Function Name : DisplaySchedule
//  Description   : According to the input function gives the timing of the exam.
//  Input         : char
//  Output        : Timing
//  Author        : Anurag Gopal Satbhai
//  Date          : 07/12/25
//
//////////////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char ch)
{
    
    if(ch == 'A' || ch == 'a')
    {
        printf("Your exam at 7:00 AM.");
    }
    else if(ch == 'B' || ch == 'b')
    {
        printf("Your exam at 8:30 AM.");
    }
    else if(ch == 'C' || ch == 'c')
    {
        printf("Your exam at 9:20 AM.");
    }
    else if(ch == 'D' || ch == 'd')
    {
        printf("Your exam at 10:30 AM.");
    }
    else 
    {
        printf("Invalid division.");
    }

}        

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter your division : \n");
    scanf("%c",&cValue);
    
    DisplaySchedule(cValue);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////// 
//
//  Enter the character :
//  A
//  Your exam at 7:00 AM.
//
//  Enter the character :
//  b
//  Your exam at 8:30 AM.
//
//  Enter the character :
//  C
//  Your exam at 9:20 AM.
//
//  Enter the character :
//  D
//  Your exam at 10:30 AM.
//
//  Enter the character :
//  e
//  Invalid division. 
//
//////////////////////////////////////////////////////////////////////////////////////////