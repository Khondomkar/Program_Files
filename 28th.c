//Check whether number is perfect or not 
//O(N/2) = order of n by 2
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)               
        {
             //printf("%d\n",iCnt);
            iSum = iSum + iCnt;
        }
    } 
        if(iSum == iNo)
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
    int iValue = 0;
    int iRet = 0;
    bool bRet = false;

    printf("enter number :\n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true) 
    {
        printf("%d is perfect no.\n",iValue);
    }
    else
    {
        printf("%d is not perfect no.\n",iValue);
    }


    return 0;
}