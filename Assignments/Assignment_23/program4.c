/////////////////////////////////////////////////////////////////////////////////////////
//
//  4.Accept N numbers from user and accept Range, Display all elements from that range.
//      
//    Input  :      N : 6
//              start : 60
//                end : 90 
//           Elements : 85  66  3   76  93  88
//    Output : 85   66   76  88
//
//    Input  :      N : 6
//              start : 30
//                end : 50 
//           Elements : 85  66  3   76  93  88
//    Output : 
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
//  Function Name : Range
//  Description   : Display all elements from the range.
//  Input         : ptr, int, int, int
//  Output        : void
//  Author        : Anurag Gopal Satbhai
//  Date          : 18/11/25
//
//////////////////////////////////////////////////////////////////////////////////////////

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
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

    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0; 
    int *p = NULL;
    
    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    printf("Enter the starting point : ");
    scanf("%d",&iValue1);

    printf("Enter the ending point : ");
    scanf("%d",&iValue2);

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

    Range(p,iSize,iValue1, iValue2);


    free(p);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////// 
//
//      Enter number of elements : 6
//      Enter the starting point : 60
//      Enter the ending point : 90
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
//      85      66      76      88
//
//////////////////////////////////////////////////////////////////////////////////////////