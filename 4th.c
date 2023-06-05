#include<stdio.h>
int Multiplication(int iValue1, int iValue2) // step 4
{
    int iAns = 0;
   
    iAns = iValue1 * iValue2;
    return iAns;                             // step 6
}
int main()                                  // step 1
{
    int iNo1 = 0, iNo2 = 0;                 // step2
    int iMult = 0;                          // step 2

    printf("Enter first number :\n");       // 14 to 18 step 3
    scanf("%d",&iNo1);  //d = decimal

    printf("Enter the second number :\n");
    scanf("%d",&iNo2);

    iMult = Multiplication(iNo1,iNo2);        //step4
//step 5 ^
    printf("iNo1 * iNo2 = %d\n",iMult);       //step 6
    return 0;                                 // step 7
    //  Return success to the OS                              
}