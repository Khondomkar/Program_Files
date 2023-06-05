//return maximum digit from gievn number
#include<stdio.h>
int CheckLargest(int iValue)
{
    int iRem = 0;
    int iMax = 0;

    if(iValue < 0)
    {
        iValue = - (iValue);
    }
    while (iValue != 0)
    {
        iRem = iValue % 10;
        if(iRem > iMax)         ///////////////
        {
            iMax = iRem;
        }
        if(iMax == 9)               ////////
        {
            break;
        }
        iValue = iValue /10;
    }
    return iMax;
    
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter a number : \n");
    scanf("%d",&iNo);

    iRet = CheckLargest(iNo);

    printf("The largest digit in %d is %d \n",iNo,iRet);
    return 0;
}