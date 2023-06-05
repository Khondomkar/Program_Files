// count number of digits in given number
#include<stdio.h>
int Count_Digits(int iValue)
{
    int iDigit =0;
    int iCnt = 0;

    while(iValue != 0)
    {
        iDigit = iValue % 10;
        iValue = iValue/10;
        iCnt++;
    }
    return iCnt;
}
int main()
{
    int iNo1 = 0;
    int iRet = 0;
    printf("Enter a number : \n");
    scanf("%d",&iNo1);

    iRet = Count_Digits(iNo1);

    printf("The numbers in %d are : %d \n",iNo1,iRet);

    return 0;
}