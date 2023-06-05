//  4
//  1   2   3   4

#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    if(iValue < 0)
    {
        iValue = -(iValue);
    }
    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iNo;
    printf("Enter the number \n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}