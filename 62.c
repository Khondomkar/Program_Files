// count number of even numbers in given numbers
#include<stdio.h>
#include<stdlib.h>
// Step6: function
int CountEven(int *Arr, int iSize)  // Server 
{
    int iCnt = 0, iEvenCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(((Arr[iCnt]) % 2) == 0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
}
int main()  // client 
{
    int * ptr = NULL;
    int iLength = 0;
    int iCnt = 0;
    int iRet = 0;

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

// Step 4 : Function call
    iRet = CountEven(ptr,iLength);

    printf("Number of even elements are : %d \n",iRet);

//Step 6 : Deallocate resources

    free(ptr);

    return 0;

}