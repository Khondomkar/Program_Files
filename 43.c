//count number of even digits in the given number
#include<stdio.h>
int Count_Even_Digits(int iValue)
{
    int iDigit =0;
    int iCnt = 0;

    if(iValue == 0)         // Filter
    {
        return 1;
    }
    if(iValue < 0)          // Updater
    {
        iValue = -iValue;
    }
    while(iValue > 0)
    {
        iDigit = iValue % 10;
        if(iDigit % 2 == 0)
        {
            iCnt++;
        }
        iValue = iValue/10;
    }
    return iCnt;

}
int main()
{
    int iNo1 = 0;
    int iRet = 0;
    printf("Enter a number : \n");
    scanf("%d",&iNo1);

    iRet = Count_Even_Digits(iNo1);

    printf("The summation of numbers in %d are : %d \n",iNo1,iRet);

    return 0;
}