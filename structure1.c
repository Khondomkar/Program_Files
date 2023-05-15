#include<stdio.h>
// structure declaration
// no memory allocation at this point
struct Demo
{

    int i;
    float f;
    int j;
    double d;

};

int main()
{
    // structure object / variable creation
    // Memory gets allocated
   struct Demo obj1;
   struct Demo obj2;
   struct Demo obj3;
// Member initialization.
   obj1.d = 11.0;
   obj2.i = 21;
   
   printf("Size of obj1 is : %d\n", sizeof(obj1));
   printf("Size of obj2 is : %d\n", sizeof(obj2));
   printf(" i if obj2 is : %d\n",obj2.i);
   
   return 0;
}