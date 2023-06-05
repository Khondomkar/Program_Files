// even factors display
#include<stdio.h>

 void DisplayEvenFactors(int iValue)
 {
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iValue/2); iCnt=iCnt+2)
    {
        if((iValue % iCnt == 0))
        {
            printf("%d\n",iCnt);
        }
    }
 }
int main()
{
    int iNo = 0;

    printf("enter the number \n");
    scanf("%d",&iNo);

    DisplayEvenFactors(iNo);

    return 0;
}
//41