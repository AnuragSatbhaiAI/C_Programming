/////////////////////////////////////////////////////////////////////////////////////////
//
//  1.Accept N numbers from user and return frequency of even number
//      
//    Input  :      N : 6
//           Elements : 85  66  3   80  93  88
//    Output : 3
//
//////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountEven
//  Description   : Returns the count of even numbers.
//  Input         : ptr, int
//  Output        : int
//  Author        : Anurag Gopal Satbhai
//  Date          : 18/11/25
//
//////////////////////////////////////////////////////////////////////////////////////////

int CountEven(int Arr[], int iLength)
{
    
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount++;
        }
    }

    return iCount;
}        

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iSize = 0, iRet = 0, iCnt = 0; 
    int *p = NULL;
    
    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(NULL == p)
    {
        printf("Unable to allocate memory.");
        return -1;
    }

    printf("Enter the %d elements : \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : \n", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = CountEven(p,iSize);

    printf("Result is %d",iRet);

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
//      3
//      Enter element 4 :
//      80
//      Enter element 5 :
//      93
//      Enter element 6 :
//      88
//      Result is 3
//
//////////////////////////////////////////////////////////////////////////////////////////