//Accept n numbers and find largest number 
#include<stdio.h>
#include<stdlib.h>
int Minimum(int Arr[], int iSize) //5
{
    int iMin = Arr[0], iCnt = 0;

    for(iCnt = 0; iCnt <iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin )
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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
     
    iRet = Minimum(ptr,iLength); //4

    printf("%d is the smallest number in the array",iRet);

    free(ptr); //6

    return 0;


}