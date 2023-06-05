//
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Step6: function
bool CheckOccurance(int Arr[] , int iSize , int iValue)
{
    int iCnt = 0, iFrqCnt = 0;
    

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]) == iValue)
        {
            iFrqCnt++;
        }
        
    }
    if(iFrqCnt != 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()  // client 
{
    int * ptr = NULL;
    int iLength = 0;
    int iCnt = 0;
    bool bRet = false;
    int iNo = 0;

// Step : 1 Accept Size of Array
    printf("Enter the Number of elements \n");
    scanf("%d",&iLength);

// Step 2 : Allocate memory for array
    ptr = (int *) malloc(iLength * sizeof(int));

    printf("Plaese enter the elemnts \n");

// Step 3: Accept th elements of aaray

    for(iCnt =0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter a number to findout the occurance \n");
    scanf("%d",&iNo);

// Step 4 : Function call
    bRet =  CheckOccurance(ptr,iLength,iNo);

    if(bRet == true)
    {
        printf("number occurs");
    }
    else
    {
        printf("number not occurs");
    }

//Step 6 : Deallocate resources

    free(ptr);

    return 0;

}