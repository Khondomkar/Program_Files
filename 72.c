//return the index where the number occurs in given array
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Step6: function
int CheckLastOccurance(int Arr[] , int iSize , int iValue)
{
    int iCnt = 0;
    

    for(iCnt = iSize -1; iCnt >= 0; iCnt--)
    {
        if((Arr[iCnt]) == iValue)
        {
            break;                      /////////////////////
        }
        
    }
    if(iCnt == -1)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }

}
int main()  // client 
{
    int * ptr = NULL;
    int iLength = 0;
    int iCnt = 0;
    int iRet = false;
    int iNo = 0;

// Step : 1 Accept Size of Array
    printf("Enter the Number of elements \n");
    scanf("%d",&iLength);

// Step 2 : Allocate memory for array
    ptr = (int *) malloc(iLength * sizeof(int));

    printf("Plaese enter the elemnts \n");

// Step 3: Accept the elements of aaray

    for(iCnt =0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter a number to findout the occurance \n");
    scanf("%d",&iNo);

// Step 4 : Function call
    iRet =  CheckLastOccurance(ptr,iLength,iNo);

    
    if(iRet == -1)
    {
        printf("number not occurs");
    }
    else
    {
        printf("number occurs at Arr[%d] ",iRet);
    }
    

//Step 6 : Deallocate resources

    free(ptr);

    return 0;

}