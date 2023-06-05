/*
        INPUT :
                4   4
        OUTPUT :
                *   *   *   *
                2   2   2   2
                *   *   *   *
                4   4   4   4
*/


#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
      
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",i);
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}
int main()
{
    int iNo1 = 0, iNo2 = 0;

    printf("Enter the number of rows\n");
    scanf("%d",&iNo1);
        
    printf("Enter the number of columns\n");
    scanf("%d",&iNo2);

    Display(iNo1,iNo2);

    return 0;
}