//reverse given number
#include<stdio.h>
int RiverseDigits(int iValue)
{
    int iRem = 0;   // remainder
    int iRev = 0;   // reverse

    if(iValue <0)
    {
        iValue = - iValue;
    }
    while (iValue !=0)
    {
        iRem = iValue % 10;
        iRev =(iRev * 10) + iRem;
        iValue = iValue / 10;
    }
    return iRev;
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter a number : \n");
    scanf("%d",&iNo);

    iRet = RiverseDigits(iNo);

    printf("The riverse number of %d is : %d \n",iNo,iRet);

    return 0;
}