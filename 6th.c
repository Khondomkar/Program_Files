#include<stdio.h>
#include<stdbool.h>  // boolean data type access
bool DIvisibleByFive(int iNo)
{
    int iAns = 0;
    iAns = iNo % 5;
    
    if(iAns == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet = DIvisibleByFive(iValue);
    if (bRet == false)
    {
        printf("%d  is Divisible by 5 \n",iValue); // position argument
    }
    else
    {
        printf("%d  is not  Divisible by 5\n",iValue);
    }


    return 0;
}