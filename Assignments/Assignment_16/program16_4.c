///////////////////////////////////////////
//
//  Name : Vivek Vilas Limbore 
//  Problem : Accept number of columns and rows from user and display below pattern
//
///////////////////////////////////////////
//
//  Input : iRow = 4 iColumn = 4
//  Output : 4   4   4   4   4
//           3   3   3   3   3
//           2   2   2   2   2
//           1   1   1   1   1
//
///////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int Row, int Column)
{
    int i = 0, j = 0;
    
    for(i = Row; i >= 1; i--)
    {
        for(j = Column; j >= 1; j--)
        {
            printf("%d", i);
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