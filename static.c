#include<stdio.h>

void Demo()
{  
     int A = 10;
     A++;    
     printf("value from Demo is: %d\n",A);
}

void Hello()
{  
     static int B = 10;
     B++;    
     printf("value from Demo is: %d\n",B);
}
int main()
{

      Demo();
      Demo();
      Demo();

      Hello();
      Hello();
     Hello();
    return 0;
}