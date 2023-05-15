#include<stdio.h>

int main()
{
   
   int Arr[4] = {11,21,51,101};
   int iCnt = 0;

   printf("Elements of array are :\n");
    //   1        2          3
   while( iCnt <= 3)
   {
    printf("%d\n",Arr[iCnt]); //4
    iCnt++;
   }

   
    return 0;
}