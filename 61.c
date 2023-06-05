//Accept n numbers and return average of them

#include<stdio.h>
#include<stdlib.h>

// float average(int *Arr, int iSize)
float Average(int Arr[], int iSize)
{
    int iSum = 0, iCnt = 0;
    float fAvg = 0.0;

    for(iCnt = 0; iCnt <= iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return(iSum/iSize);
}
int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0;
    float fRet = 0.0f;

    printf("Enter the the number of elements");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Please Enter the numbers");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    fRet =Average(ptr,iLength);

    printf("Average is : %f\n",fRet);

    free(ptr); // Resourse Deallocation

    return 0;
}