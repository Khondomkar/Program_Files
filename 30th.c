//Non factors display
#include<stdio.h>
int SumNonFactors(int iValue)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt<iValue; iCnt++)
    {
        if((iValue % iCnt) != 0)
        {
           iSum = iCnt + iSum;
        }
    }
    return iSum;
}
int main()
{
    int iNo = 0; 
    int iRet = 0;
     printf("Enter the number \n ");
     scanf("%d",&iNo);

     iRet = SumNonFactors(iNo);
     printf("The sum of all non factors of %d is %d \n",iNo,iRet);
     
     return 0;
}