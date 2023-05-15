#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo1)
{
  if((iNo1 % 2) ==0)
  {
      return true;
  }
  else
  {
      return false;
  }

}

int main()
{

int iValue1 = 0;
bool bRet;

printf("Enter a number\n");
scanf("%d",&iValue1);

 bRet = CheckEven(iValue1);

  if(bRet == false)
  {
      printf("it is odd number\n");
  }
  else
  {
      printf("it is even number\n");
  }


   return 0;
}