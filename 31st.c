//Display table
#include<stdio.h>
void DisplayTable(int iValue)
{
    int iCnt = 0;
    int iMult = 0;
    printf("The table of %d is \n",iValue);
    printf("//////////////////////\n");
    for(iCnt = 1; iCnt<=10; iCnt++)
    {
        iMult = iCnt * iValue;
        printf("%d \n",iMult);
    }
    printf("/////////////////////\n");
}
int main()
{
    int iNo = 0;
    printf("Enter the number\n");
    scanf("%d",&iNo);

    DisplayTable(iNo);

    return 0;
}