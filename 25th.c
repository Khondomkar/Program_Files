#include<stdio.h>
void DisplayFactors(int iNo)
{
    int iCnt = 0;
    printf("Factors of %d \n",iNo);

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)               // == comparison operator & = Assignment operatorṆ
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("enter number :\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
    return 0;
}