#include<stdio.h>

int Display()
{
    int iCnt = 0;

    iCnt = 1;  //1
    while(iCnt<=5) //2
    {
        printf("JAY GANESH...\n");  //4
        iCnt++;   //3
    }

    return 0;
}
int main()
{
    
    Display();
    
    return 0;
    
}