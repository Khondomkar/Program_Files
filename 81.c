//  4
// A    B   C   D


#include<stdio.h>

void Display(int iValue) //N
{
    int iCnt = 0;
    char Ch = 'a';

    if(iValue < 0)
    {
        iValue = -(iValue);
    }
    for(iCnt = 1; iCnt <= iValue; iCnt++,Ch++)
    {
        printf("%c\t",Ch);
        
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
