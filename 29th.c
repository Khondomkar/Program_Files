//Non factors display
#include<stdio.h>
void DisplayNonFactors(int iValue)
{
    int iCnt = 0;
    printf("Non Factors of %d are \n",iValue);
    for(iCnt = 1; iCnt<iValue; iCnt++)
    {
        if((iValue % iCnt) != 0)
        {
            printf("%d \n",iCnt);
        }
    }
}
int main()
{
    int iNo = 0; 
     printf("Enter the number \n ");
     scanf("%d",&iNo);

     DisplayNonFactors(iNo);
     
     return 0;
}