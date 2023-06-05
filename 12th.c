//sequence demonstartion
#include<stdio.h>

void Display(int iNo1)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<iNo1; iCnt++)
    {
        printf("JAY GANESH...\n"); 
    }
}
int main()
{
    int iNo = 0;

    printf("Enter no. of iterartions : \n");
    Sacnf("%d",&iNo);

    Display(iNo);
    
    return 0;
    
}