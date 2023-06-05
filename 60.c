//Accept n numbers from user and perform addition of that numbers 
#include<stdio.h>
#include<stdlib.h>

int  Addition(int iArr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + iArr[iCnt];
    }
    return iSum;
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;
    int iLength = 0;
    printf("enter number of elements u want to store \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enetr the elements \n");
    for(iCnt =0; iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
     iRet = Addition(ptr,iLength); // Addition(100,5)

    printf("Addition of all numbers is %d \n",iRet);

    free(ptr);
    
    return 0;
}