// palindrome or not
#include<stdio.h>

int CheckPallindrome(int iValue)
{
    int iRem = 0;   // remainder
    int iRev = 0;   // reverse
    int iTemp = iValue;
    if(iValue <0)
    {
        iValue = - iValue;
    }
    while (iTemp !=0)
    {
        iRem = iTemp % 10;
        iRev =(iRev * 10) + iRem;
        iTemp = iTemp / 10;
    }
    if(iRev == iValue)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter a number : \n");
    scanf("%d",&iNo);

    iRet = CheckPallindrome(iNo);

    if(iRet == 1)
    {
        printf("the given number is palindrome \n");
    }
    else
    {
        printf("The number is not palindrome \n");
    }

    return 0;
}