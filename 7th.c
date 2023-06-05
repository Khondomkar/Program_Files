#include<stdio.h>
#include<stdbool.h>  // boolean data type access
bool DivisibleByThreeAndFive(int iNo)
{
    int iAns = 0;
    iAns = iNo % 5;
    
    if( (iNo % 3 == 0)&&(iNo % 5 ==0))
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet = DivisibleByThreeAndFive(iValue);

    if(bRet==false)
    {
        printf("%d is divisible bye 3 and 5",iValue);
    }
    else
    {
        printf("the number is not divisible by 3 & 5\n");
    }
    

    return 0;
}