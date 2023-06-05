//Time complexity
//O(N/2) = order of n by 2
#include<stdio.h>
int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    printf("Factors are \n");
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)               
        {
             printf("%d\n",iCnt);
            iSum = iSum + iCnt;
        }
    }        
        if(iSum==iNo)
        {
            printf("number is perfect number\n");
        }
        else
        {
            printf("number is not perfect\n");
        }

    
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter number :\n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);
    printf("Sum is:\n");
    printf("%d",iRet);

    return 0;
}