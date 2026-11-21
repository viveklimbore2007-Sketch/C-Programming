
#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str, char ch)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            return i;
        }
        i++;
    }

    return -1;
}

int main()
{
    char Arr[100];
    char cValue;
    int iRet = 0;

    printf("Enter a string : \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter a character : \n");
    scanf(" %c", &cValue);

    iRet = FirstChar(Arr, cValue);

    if(iRet == -1)
    {
        printf("Character not found\n");
    }
    else
    {
        printf("First occurrence of character is at index : %d\n", iRet);
    }

    return EXIT_SUCCESS;
}

