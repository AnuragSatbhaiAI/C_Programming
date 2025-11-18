/////////////////////////////////////////////////////////////////////////////////////////
//
//  3.Accept N numbers from user and check whether that numbers contains 11 in it or not .
//      
//    Input  :      N : 6
//           Elements : 85  66  11   80  93  88
//    Output : 11 is present.
//
//////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description   : Checks whether 11 is present in the array.
//  Input         : ptr, int
//  Output        : bool
//  Author        : Anurag Gopal Satbhai
//  Date          : 18/11/25
//
//////////////////////////////////////////////////////////////////////////////////////////

bool Check(int Arr[], int iLength)
{
    
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bFlag = true;
        }
    }


    return bFlag;
}        

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iSize = 0, iCnt = 0; 
    int *p = NULL;
    bool bRet = false;
    
    printf("Enter number of elements : ");
    scanf("%d",&iSize);

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

    bRet = Check(p,iSize);

    if(bRet == true)
    {
        printf("11 is present.");
    }
    else
    {
        printf("11 is absent.");
    }

    free(p);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////// 
//
//      Enter number of elements : 6
//      Enter the 6 elements :
//      Enter element 1 :
//      85
//      Enter element 2 :
//      66
//      Enter element 3 :
//      11
//      Enter element 4 :
//      80
//      Enter element 5 :
//      93
//      Enter element 6 :
//      88
//      11 is present
//
//////////////////////////////////////////////////////////////////////////////////////////