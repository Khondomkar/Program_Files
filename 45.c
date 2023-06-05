//count even and digits and display it
#include<stdio.h>
void Count_Even_Digits(int iValue)
{
    int iDigit =0;
    int iEvenCnt = 0;
    int iOddCnt = 0;
    if(iValue == 0)
    {
        printf("Even digits are 1 \n");
        printf("odd digits are 0\n");
        return;
    }
    
    
    while(iValue != 0)
    {
        iDigit = iValue % 10;
        if(iDigit % 2 == 0)
        {
          iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
        iValue = iValue/10;
    }
     printf("Even digits are : %d\n",iEvenCnt);
     printf("odd digits are : %d\n",iOddCnt);
}
int main()
{
    int iNo1 = 0;
    
    printf("Enter a number : \n");
    scanf("%d",&iNo1);

    Count_Even_Digits(iNo1);

    

    return 0;
}