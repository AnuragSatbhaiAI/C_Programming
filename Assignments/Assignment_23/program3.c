/////////////////////////////////////////////////////////////////////////////////////////
//
//  3.Accept N numbers from user and accept one another number as no, return index of
//    last occurrence of that no.
//      
//    Input  :      N : 6
//                 No : 66
//           Elements : 85  66  3   66  93  88
//    Output : 3
//
//    Input  :      N : 6
//                 No : 93
//           Elements : 85  66  3   66  93  88
//    Output : 4
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
//  Function Name : LastOcc
//  Description   : Returns index of Last occurrence of that no.
//  Input         : ptr, int,int
//  Output        : int
//  Author        : Anurag Gopal Satbhai
//  Date          : 18/11/25
//
//////////////////////////////////////////////////////////////////////////////////////////

int LastOcc(int Arr[], int iLength, int iNo)
{
    
    int iCnt = 0,iLastOcc = -1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iLastOcc = iCnt;
        }
    }


    return iLastOcc;
}        

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0; 
    int *p = NULL;
    
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

    iRet = LastOcc(p,iSize,iValue);

    printf("%d",iRet); 

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
//      3
//
//////////////////////////////////////////////////////////////////////////////////////////