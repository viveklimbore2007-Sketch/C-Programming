///////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : Accept number of rows and columns from user and display below pattern
//
///////////////////////////////////////
//
//  Input : iRow : 4 iCol : 4
//  Output : 1 2 3 4
//           5 6 7 8 
//           9 1 2 3
//           4 5 6 7
//
///////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iEven = 2, iOdd = 1;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0)
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", iEven);
                iEven = iEven + 2;
            }
            iEven = 2;
        }
        else
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", iOdd);
                iOdd = iOdd + 2;
            }
            iOdd = 1;
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
