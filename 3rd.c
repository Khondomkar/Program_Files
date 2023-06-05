#include<stdio.h>

int main()
{
    int iNo1 = 0, iNo2 = 0;
    int iMult = 0;

    printf("Enter first number :\n");
    scanf("%d",&iNo1);  //d = decimal

    printf("Enter the second number :\n");
    scanf("%d",&iNo2);

    iMult = iNo1 * iNo2;
    
    printf("The first number :%d\n",iNo1);
    printf("The second number :%d\n",iNo2);
    printf("iNo1 * iNo2 = %d\n",iMult);
    return 0;
}