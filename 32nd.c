// reverse order
#include<stdio.h>

void DescendingOrder(int iNo)
{
    int iCnt = 0;
    printf("_____________________________________________________\n");
    for(iCnt = iNo; iCnt > 0;)
    {
        printf("%d \t",iCnt);
         iCnt--;               // ***
    }
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