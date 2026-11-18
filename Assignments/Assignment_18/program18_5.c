///////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : Accept number of rows and columns from user and display below pattern
//
///////////////////////////////////////
//
//  Input : iRow : 5 iCol : 5
//  Output : 1 2 3 4
//           1 * * 4
//           1 * * 4
//           1 2 3 4
//
///////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow)
            {
                printf("%d\t", j);
            }
            else if(j == 1)
            {
                printf("%d\t", j);
            }
            else if(j == iCol)
            {
                printf("%d\t", j);
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
    int iRow = 0, iCol = 0;

    printf("Enter number of rows : ");
    scanf("%d", &iRow);

    printf("Enter number of columns : ");
    scanf("%d", &iCol);

    Pattern(iRow, iCol);

    return EXIT_SUCCESS;
}
