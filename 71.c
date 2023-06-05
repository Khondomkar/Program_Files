#include<stdio.h>
#include<stdlib.h>

void RiverseArray(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = iSize-1; iCnt>= 0; iCnt--)
    {
        printf("%d\t",Arr[iCnt]);
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter number of elements\n"); //1
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int)); //2

    printf("Enter the elements\n"); //3

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);   
    }

    printf("Elements in riverse order are\n");
    RiverseArray(ptr,iLength);
    //iRet = Minimum(ptr,iLength); //4

   // printf("%d is the smallest number in the array",iRet);

    free(ptr); //6

    return 0;


}