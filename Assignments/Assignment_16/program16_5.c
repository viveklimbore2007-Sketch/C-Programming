///////////////////////////////////////////
//
//  Name : Vivek Vilas Limbore 
//  Problem : Accept number of columns and rows from user and display below pattern
//
///////////////////////////////////////////
//
//  Input : iRow = 4 iColumn = 4
//  Output :    1   2   3   4
//              5   6   7   8
//              9   10  11  12
//           
//
///////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int Row, int Column)
{
    int i = 0, j = 0;

    for(i = 1; i <= Row; i++)
    {
        for(j = 1; j <= Column; j++)
        {
            printf("%d\t", i * j );
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter row : ");
    scanf("%d", &iValue1);

    printf("Enter column : ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}