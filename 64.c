// perform sum of even numbers and odd elements in given numbers
#include<stdio.h>
#include<stdlib.h>

// Step6: function
void SummationEvenOdd(int Arr[] , int iSize)
{
    int iCnt = 0, iSumEven = 0, iSumOdd = 0;
    

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(((Arr[iCnt]) % 2) == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }

    printf("The sum of even numbers is : %d \n",iSumEven);
    printf("The sum of odd numbers is :%d\n",iSumOdd);
    
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
     SummationEvenOdd(ptr,iLength);


//Step 6 : Deallocate resources

    free(ptr);

    return 0;

}