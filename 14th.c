#include<stdio.h>

int Display(int iNo1)
{
    int iCnt = 0;

    iCnt = 1;  //1
    while(iCnt<=iNo1) //2
    {
        printf("JAY GANESH...\n");  //4
        iCnt++;   //3
    }

    return 0;
}
int main()
{
    int iNo = 0;
    printf("Enter loop counter = \n");
    scanf("%d",&iNo);

    Display(iNo);
    
    return 0;
    
}