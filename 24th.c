
#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;
    register int iCnt = 0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        iFact = iCnt * iFact;
    }
    return iFact;
}
int main()
{
    int iRet = 0;
    int iAns = 0;
    printf("Enter number \n");
    scanf("%d",&iAns);
    iRet = Factorial(iAns);

    printf("The Factorial of  %d  is ",iAns);
    printf("%d \n",iRet);

    return 0;
}