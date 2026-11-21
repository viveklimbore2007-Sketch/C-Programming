
#include<stdio.h>
#include<stdlib.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[100];
    int iRet = 0;

    printf("Enter a string : ");
    scanf("%[^\n]", Arr);

    iRet = CountWhite(Arr);

    printf("Number of white spaces are : %d\n", iRet);

    return EXIT_SUCCESS;
}
