/////////////////////////////////////////////////////////////////////////////////////////
//
//  5.Accept N numbers from user and return product of all odd elements.
//      
//    Input  :      N : 6
//           Elements : 15  66  3   70  10  88
//    Output : 45
//
//    Input  :      N : 6
//           Elements : 44  66  72   70  10  88
//    Output : 0
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
//  Function Name : Product
//  Description   : Returns product of odd elements.
//  Input         : ptr, int
//  Output        : int
//  Author        : Anurag Gopal Satbhai
//  Date          : 18/11/25
//
//////////////////////////////////////////////////////////////////////////////////////////

int Product(int Arr[], int iLength)
{
    
    int iCnt = 0 , iProduct = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iProduct = iProduct * Arr[iCnt];
        }
    }


    return iProduct;
}        

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iSize = 0, iCnt = 0, iRet = 0; 
    int *p = NULL;
    
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

    iRet = Product(p,iSize);

    printf("%d",iRet); 

    free(p);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////// 
//
//      Enter number of elements : 6
//      Enter the 6 elements :
//      Enter element 1 :
//      15
//      Enter element 2 :
//      66
//      Enter element 3 :
//      3
//      Enter element 4 :
//      70
//      Enter element 5 :
//      10
//      Enter element 6 :
//      88
//      45
//
//////////////////////////////////////////////////////////////////////////////////////////