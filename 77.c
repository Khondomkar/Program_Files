//  4
//  4   3   2   1

#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    if(iValue < 0)
    {
        iValue = -(iValue);
    }
    for(iCnt = iValue; iCnt > 0; iCnt--)
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