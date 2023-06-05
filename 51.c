#include<stdio.h>
#include<stdbool.h>

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
bool CheckPallindrome(int iData)
{
    int iReverse = 0;
    iReverse = RiverseDigits(iData);
    
    if(iReverse == iData)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
   
    int iNo = 0;
    bool bRet = false;
    printf("Enter a number : \n");
    scanf("%d",&iNo);

    bRet = RiverseDigits(iNo);

    if(bRet == true)
    {
        printf("%d  is palindrome number \n",iNo);
    }
    else
    {
        printf("%d is not palindrome number\n",iNo);
    }

    return 0;
}