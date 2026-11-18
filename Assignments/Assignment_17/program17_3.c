///////////////////////////////////////
//
//  Name : Vivek Vilas Limbore
//  Problem : Accept number of rows and columns from user and display below pattern
//
///////////////////////////////////////
//
//  Input : iRow : 5 iCol : 5
//  Output : a b c d e
//           1 2 3 4 5 
//           a b c d e
//           1 2 3 4 5 
//           a b c d e
//
///////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = 'a';

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0)
        {
            ch = 'a';

            for(j = 1; j <= iCol; j++)
            {
                printf("%c\t", ch);
                ch++;
            }
        }
        else
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", j);
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
