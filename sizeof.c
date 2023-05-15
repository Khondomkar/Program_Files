#include<stdio.h>

 int main()
{
  char ch = 'A';
  int i   = 11;
  float f = 3.14;
  double d = 9.546;

  printf("%c\n",ch);
  printf("%d\n",i);
  printf("%f\n",f);
  printf("%lf\n",d);


  printf("size of each variable\n");
  printf("size of character :%d\n",sizeof(ch));
  printf("size of double :%d\n",sizeof(d));
  
  printf("address of each variable\n");
  printf("address of ch : %p\n",&ch);
  printf("address of d : %p\n",&d);
  printf("address of f : %d\n",&f);
  printf("address of i : %d\n",&i);
  return 0;
}
