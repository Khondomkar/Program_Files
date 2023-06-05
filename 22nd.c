#include<stdio.h>

int Summation(int iNo)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt=0; iCnt<=iNo; iCnt++)
    {
        iSum = iCnt + iSum;
    }
    return iSum;
}
int main()
{
    int iRet = 0;
    printf("Enter numbers to add");
    scanf("%d",&iRet);
    iRet = Summation(iRet);

    printf("Summation is : %d \n",iRet);

    return 0;
}