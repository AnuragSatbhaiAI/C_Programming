/////////////////////////////////////////////////////////////////////////////////////////
//
//  1.Accept N numbers from user and accept one another number as no, check whether no
//    is present or not.
//      
//    Input  :      N : 6
//                 No : 66
//           Elements : 85  66  3   66  93  88
//    Output : TRUE
//
//////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;


//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description   : Check whether No is present or not.
//  Input         : ptr, int, int
//  Output        : bool
//  Author        : Anurag Gopal Satbhai
//  Date          : 18/11/25
//
//////////////////////////////////////////////////////////////////////////////////////////

BOOL Check(int Arr[], int iLength, int iNo)
{
    
    int iCnt = 0;
    BOOL bCheck = FALSE;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bCheck = TRUE;
        }
    }


    return bCheck;
}        

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iSize = 0, iCnt = 0, iValue = 0; 
    int *p = NULL;
    BOOL bRet = FALSE;
    
    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    printf("Enter the number : ");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize * sizeof(int));

    if(NULL == p)
    {
        printf("Unable to allocate memory.");
        return -1;
    }

    printf("Enter %d elements : \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : \n", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    bRet = Check(p,iSize,iValue);

    if(bRet == TRUE)
    {
        printf("Number is present.");
    }
    else
    {
        printf("Number is not present.");
    }

    free(p);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////// 
//
//      Enter number of elements : 6
//      Enter the number : 66
//      Enter the 6 elements :
//      Enter element 1 :
//      85
//      Enter element 2 :
//      66
//      Enter element 3 :
//      3
//      Enter element 4 :
//      66
//      Enter element 5 :
//      93
//      Enter element 6 :
//      88
//      Number is present.
//
//////////////////////////////////////////////////////////////////////////////////////////