///////////////////////////////////////////
//
//  Name : Vivek Vilas Limbore 
//  Problem : Accept number of columns and rows from user and display below pattern
//
///////////////////////////////////////////
//
//  Input : iRow = 3 iColumn = 5
//  Output : A   A   A   A   A 
//           B   B   B   B   B
//           C   C   C   C   C
//
///////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int Row, int Column)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1, ch = 'A'; i <= Row; i++, ch ++)
    {
        for(j = 1; j <= Column; j++)
        {
            printf("%c\t", ch);
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Row : ");
    scanf("%d", &iValue1);

    printf("Enter Column : ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}