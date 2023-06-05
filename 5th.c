// Problem Statement : Accept a number from user and check whether it is divisible by 5

/*
Steps to write a program
1    Understand the problem statement 
2    write the algorithm
3    Decide language
4    Write the program
5    Test the program
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Algorithm
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
   START
        Accept the number from user
        Devide the number by 5 and check the value of remainder
        If the value is 0 
            Display as NO is Divisible by 5
        Otherwise
            Display as NO is not Divisible by 5
    END
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name :  DIvisibleByFive
// Discription :    To check whether input is divisible by 5 or not
// Input :          Integer
// Output :         Integer
// Author :         Omkar Krishnat Khond 
// Date   :         12/10/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int DIvisibleByFive(int iNo)
{
    int iAns = 0;
    iAns = iNo % 5;
    
    if(iAns == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//    Entry Point function
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = DIvisibleByFive(iValue);
    if (iRet == 0)
    {
        printf("%d  is Divisible by 5 \n",iValue);
    }
    else
    {
        printf("%d  is not  Divisible by 5\n",iValue);
    }


    return 0;
}