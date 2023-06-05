#include<stdio.h>

void Display(int iNo1)
{
    int iCnt = 0;
    iCnt = 1;  //1
    do
    {
        printf("JAY GANESH...\n");  //4
        iCnt++;   //3
    }while  (iCnt<=iNo1); //2)
}
float main()
{
    int iNo = 0;
    printf("Enter loop counter = \n");
    scanf("%d",&iNo);

    Display(iNo);
    
    return 0.0;
    
}