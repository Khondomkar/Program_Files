//Accept n numbers from user and perform addition of that numbers 
#include<stdio.h>
#include<stdlib.h>


int main()
{
    int Arr[5];
    int iCnt = 0;

    printf("Enetr the elements \n");
    for(iCnt =0; iCnt<5;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    
    printf("Elements in Array are: \n");

   for(iCnt =0; iCnt<5;iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
    
    return 0;
}