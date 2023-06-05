//  4
// A    B   C   D


#include<stdio.h>

void Display(int iValue) //N
{
    int iCnt = 0;
    char Ch = 'A';

    if(iValue < 0)
    {
        iValue = -(iValue);
    }
    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("%c\t",Ch);
        Ch++;
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
