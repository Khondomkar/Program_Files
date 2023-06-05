//return maximum digit from gievn number
#include<stdio.h>
int minDigit(int iValue)
{
    int iRem = 0;
    int iMin = 9;

    if(iValue < 0)
    {
        iValue = - (iValue);
    }
    while (iValue != 0)
    {
        iRem = iValue % 10;
        if(iRem < iMin)         ///////////////
        {
            iMin = iRem;
        }
        iValue = iValue /10;
    }
    return iMin;
    
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter a number : \n");
    scanf("%d",&iNo);

    iRet = minDigit(iNo);

    printf("The Smallest digit in %d is %d \n",iNo,iRet);
    return 0;
}