// palindrome or not
#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iValue)
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

    bRet = CheckPallindrome(iNo);

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