#include<stdio.h>

void Display(int iNo1)
{
    int iCnt = 0;
   iCnt = 1;
    while(iCnt<=iNo1)
    {
        printf("Marvellous : %d\n",iCnt);
        iCnt++;
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