// accept n numbers from user and perform addition of these numbers
// 
//Input
// Value of n = 5
// Values = 10 20 30 40 50

// Output
// Addition

// Algorithm
/*
  START
       Accept the number of elements from user 
       Allocate the memory to store that numbers 
       Accept the numbers from user
       Perform addition of all Numbers
       Display the addition 
   END
*/
/*
 STEPS
      1 - Understand the problem
      2 - write algorithm
      3 - decide language
      4 - write the program
      5 - Test the program
*/


#include<stdio.h>   // for printf and scanf
#include<stdlib.h>  // for malloc and free

///////////////////////////////////////
//
// Application name - Addition of n numbers 
// Input - N numbers
// Output - Addition
// Author - Omkar Khond
// DAte - 18 Sept 2022
//
////////////////////////////////////////

int main()
{
    int *Arr = NULL;    // pointer to hold the address of array
    int isize = 0;          // variable to hold size of array
    int i =0;
    int isum = 0;

    printf (" Please enter hoe many elements of array?\n");
    scanf("%d",&isize);

    // Alloacate the memory
    Arr = (int *)malloc(sizeof(int));

    printf("Please enter the elements\n");

    for(i = 0; i < isize; i++)
    {
        scanf("%d",&Arr[i]);
    }
    // perform addition

    for(i=0; i<isize; i++)
    {
        isum = isum + Arr[i];
    }

    printf("Addition is :%d\n", isum);

    free(Arr);

    printf("memory gets dealocated.\n");
     return 0;
}