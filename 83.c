// Row 4
// Columns 4
/*
        *   *   *   *
        *   *   *   *
        *   *   *   *
        *   *   *   *
*/

#include<stdio.h>

void Display(int iRow,int iCol)             //N^2
{
    int i = 0, j = 0;

    if(iRow < 0)
    {
        iRow = -iRow;
    }
        if(iCol < 0)
    {
        iCol = -iCol;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j<= iCol; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    
}
int main()
{
    int iNo1 = 0, iNo2 = 0;

    printf("Enter the number of Rows \n");
    scanf("%d",&iNo1);
    printf("Enter the number of column \n");
    scanf("%d",&iNo2);


    Display(iNo1,iNo2);

    return 0;
}