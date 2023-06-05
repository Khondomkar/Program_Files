// reverse order
#include<stdio.h>

void DescendingOrder(int iNo)
{
    int iCnt = 0;
    printf("_____________________________________________________\n");
    iCnt = iNo;
    do
    {
        printf("%d \t",iCnt);
        iCnt--;
        
    }while(iCnt > 0);
    printf("\n___________________________________________________\n");
}
int main()
{
    int iValue = 0;
    printf("Enter the number \n");
    scanf("%d",&iValue);

    DescendingOrder(iValue);

    return 0;
}