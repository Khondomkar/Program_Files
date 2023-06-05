// frequency of a number given in array
#include<stdio.h>
#include<stdlib.h>

// Step6: function
int CountFrequency(int Arr[] , int iSize , int iValue)
{
    int iCnt = 0, iFrqCnt = 0;
    

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]) == iValue)
        {
            iFrqCnt++;
        }
        
    }

    return iFrqCnt;
}
int main()  // client 
{
    int * ptr = NULL;
    int iLength = 0;
    int iCnt = 0;
    int iRet = 0;
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

    printf("Enter a number u want to count its frequency \n");
    scanf("%d",&iNo);

// Step 4 : Function call
    iRet =  CountFrequency(ptr,iLength,iNo);
    printf("The %d number occurer %d times in given array \n",iNo,iRet);

//Step 6 : Deallocate resources

    free(ptr);

    return 0;

}