//Accept n numbers from user and perform addition of that numbers 
#include<stdio.h>
#include<stdlib.h>

int  Addition(int iData[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + iData[iCnt];
    }
    return iSum;
}

int main()
{
    int Arr[5];
    int iCnt = 0;
    int iRet = 0;

    printf("Enetr the elements \n");
    for(iCnt =0; iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
     iRet = Addition(Arr,5); // Addition(100,5)

    printf("Addition of all numbers is %d \n",iRet);

    return 0;
}