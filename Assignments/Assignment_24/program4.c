/////////////////////////////////////////////////////////////////////////////////////////
//
//  4.Accept N numbers from user and display all such number which contains 3 digits in it.
//      
//    Input  :      N : 6 
//           Elements : 8225  665  3   76  953  858
//    Output : 665   953   858
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
//  Function Name : Digits
//  Description   : Display all numbers which contains 3 digits.
//  Input         : ptr, int
//  Output        : void
//  Author        : Anurag Gopal Satbhai
//  Date          : 18/11/25
//
//////////////////////////////////////////////////////////////////////////////////////////

void Digits(int Arr[], int iLength)
{
    
    int iCnt = 0,iNo = 0, iDigitCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iNo = Arr[iCnt];
        iDigitCount = 0;

        while(iNo != 0)
        {
            iNo = iNo / 10;
            iDigitCount++;
        }

        if(iDigitCount == 3)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }

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

    Digits(p,iSize);


    free(p);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////// 
//
//      Enter number of elements : 6
//      Enter the 6 elements :
//      Enter element 1 :
//      8225
//      Enter element 2 :
//      665
//      Enter element 3 :
//      3
//      Enter element 4 :
//      76
//      Enter element 5 :
//      953
//      Enter element 6 :
//      858
//      665     953     858
//
//////////////////////////////////////////////////////////////////////////////////////////