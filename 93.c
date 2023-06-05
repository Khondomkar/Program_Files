/*
        INPUT :
                4   4
        OUTPUT :
                @   2   3   4
                1   @   3   4
                1   2   @   4
                1   2   3   @
*/


#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf(" No. of Rows & Columns must be same");
        return;
    }
    for(i = 1; i <= iRow; i++)
    {
      
        for(j = 1; j <= iCol; j++)
        {
            if(j == i)
            {
                printf("@\t");
            }
            else
            {
                printf("%d\t",j);
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