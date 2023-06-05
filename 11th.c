//sequence demonstartion
#include<stdio.h>

void Display()
{
    int iCnt = 0;
    int iNo = 0;
    printf("enter loop counter: \n");
    scanf("%d",&iNo);
    while(iCnt<iNo)
    {
        printf("JAY GANESH...\n"); 
        iCnt++;
    }
}
int main()
{
    Display();
    
    return 0;
    
}