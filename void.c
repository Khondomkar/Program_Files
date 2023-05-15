#include<stdio.h>

 int main()
 {
   
   char ch ='a';
   int i = 1;
   float f = 9.09;
   double d = 8.0976;

   char *cp = &ch;
   int *op  = &i;
   float *fp = &f;
   double *dp = &d;

   void *vp = &ch;

  printf("Value of ch : %c\n",ch);
  printf("address of ch : %p\n",&ch);
  printf("value inside cp : %p\n",cp);
  printf("Data refer by cp :%c\n",*cp);
  printf("Size of ch : %d\n",sizeof(ch));
  printf("size of cp : %d\n",sizeof(cp));

  printf("data refer by vp : %c\n",*(char *)vp);
  
  vp = &i;

  printf("Data refer by vp : %d\n",*(int *)vp);

  return 0;
  }