
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }

    return FALSE;
}

int main()
{
    char Arr[100];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter a string : ");
    scanf("%[^'\n']s", Arr);

    printf("Enter a character : ");
    scanf(" %c", &cValue);

    bRet = ChkChar(Arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character is present in string");
    }
    else
    {
        printf("Character is not present in string");
    }

    return EXIT_SUCCESS;
}
