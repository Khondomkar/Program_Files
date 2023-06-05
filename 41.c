//sum of all digits in given number 
#include<stdio.h>
int Sum_Digits(int iValue)
{
    int iDigit =0;
   // int iCnt = 0;
    int iSum = 0;

    if(iValue < 0)          // Updater
    {
        iValue = -iValue;
    }
    while(iValue > 0)
    {
        iDigit = iValue % 10;
        iValue = iValue/10;
       // iCnt++;
        iSum = iDigit + iSum;
    }
    return iSum;
}
int main()
{
    int iNo1 = 0;
    int iRet = 0;
    printf("Enter a number : \n");
    scanf("%d",&iNo1);

    iRet = Sum_Digits(iNo1);

    printf("The summation of numbers in %d are : %d \n",iNo1,iRet);

    return 0;
}