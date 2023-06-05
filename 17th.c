#include<stdio.h>

void Display(int iNo1)
{
    int iCnt = 0;
    for(iCnt=1; iCnt<=iNo1; iCnt++)
    {
        printf("Marvellous : %d\n",iCnt);
    }
}
float main()
{
    int iNo = 0;
   printf("Enter loop counter = \n");
    scanf("%d",&iNo);

    Display(iNo);
    
    return 0.0;
    
}