// Count even and odd elements

#include<stdio.h>
#include<stdlib.h>
void DisplayEvenOddCount(int Arr[] , int iSize)
{
    int iCnt = 0, iEvenCnt = 0, iOddCnt = 0;


    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(((Arr[iCnt]) % 2) == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
    }

    printf("The count of even numbers is : %d \n",iEvenCnt);
    printf("The count of even numbers is :%d\n",iOddCnt);
    
}
int main()
{
    int *ptr = NULL;
    int iCnt = 0;
    int iLength = 0;
    int iRet  = 0;

    printf("Please enter the number of elements \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Plaese Enter the value of elements \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    DisplayEvenOddCount(ptr,iLength);

    free(ptr);

    return 0;
}