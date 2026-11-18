///////////////////////////////////////////
//
//  Name : Vivek Vilas Limbore 
//  Problem : Accept number of columns and rows from user and display below pattern
//
///////////////////////////////////////////
//
//  Input : iRow = 4 iColumn = 4
//  Output : A   B   C   D 
//           a   b   c   d 
//           A   B   C   D
//           a   b   c   d
//
///////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int Row, int Column)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= Row; i++)                   // Outer loop[If we do any changes here then it will affect the out loop which is row]
    {
        ch = 'A';

            if((i % 2) == 0)
            {
                ch = 'a';
            }
            else
            {
                ch = 'A';
            } 
        for(j = 1; j <= Column; j++)
        {
            printf("%c\t", ch);
            ch++;
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter row : ");
    scanf("%d", &iValue1);

    printf("Enter Column : ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}