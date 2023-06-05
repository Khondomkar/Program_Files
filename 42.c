//sum of all digits in given number 
#include<stdio.h>
int Sum_Digits(int iValue)
{
    
    int iSum = 0;

    if(iValue < 0)          // Updater
    {
        iValue = -iValue;
    }
    while(iValue > 0)
    {
        iSum = (iValue % 10) + iSum;
        iValue /= 10;
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