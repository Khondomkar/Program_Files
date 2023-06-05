#include<stdio.h>
 int Multiplication(int iValue1, int iValue2)
{
 // int iValue1 = 0, iValue2 = 0;
    int iAns = 0;

    iAns = iValue1 * iValue2;
    
    return iAns;
}


int main()
{
    int iNo1 = 0, iNo2 = 0;
    int iMult = 0;

    printf("Enter first number :\n");
    scanf("%d",&iNo1);  //d = decimal

    printf("Enter the second number :\n");
    scanf("%d",&iNo2);

    printf("The first number :%d\n",iNo1);
    printf("The second number :%d\n",iNo2);

   iMult =  Multiplication(iNo1,iNo2);
   // iMult = Multiplication(iNo1*iNo2);
    printf("Multiplication is :%d\n",iMult);

    return 0;
}