// Addition of numbers from 1 to 5
#include<stdio.h>

int Summation()
{
    int iNo1 = 1;
    int iNo2 = 2;
    int iNo3 = 3;
    int iNo4 = 4;
    int iNo5 = 5;
    int iAns = 0;


    iAns = iNo1 + iNo2 + iNo3 + iNo4 + iNo5;
   return iAns;
}

int main()
{
    int iRet = 0;

    iRet = Summation();
    printf("The sum is  : %d \n",iRet);
    
    return 0;
}