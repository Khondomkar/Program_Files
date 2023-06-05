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
    int iAns = 0;
    printf("Enter numbers to add \n");
    scanf("%d",&iAns);
    iRet = Summation(iAns);

    printf("The summatin of 1st %d numbers is \n",iAns);
    printf("Summation is : %d \n",iRet);

    return 0;
}