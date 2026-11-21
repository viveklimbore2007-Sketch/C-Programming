
#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str, char ch)
{
    int i = 0;
    int iIndex = -1;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            iIndex = i;
        }

        i++;
    }

    return iIndex;
}

int main()
{
    char Arr[100];
    char cValue;
    int iRet = 0;

    printf("Enter a string : ");
    scanf("%[^'\n']s", Arr);

    printf("Enter a character : ");
    scanf(" %c", &cValue);

    iRet = LastChar(Arr, cValue);

    printf("Last occurrence of character is at index : %d\n", iRet);

    return EXIT_SUCCESS;
}
