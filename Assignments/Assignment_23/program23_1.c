
#include<stdio.h>
#include<stdlib.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[50];

    printf("Enter a string : ");
    scanf("%[^'\n']s", Arr);

    strlwrx(Arr);

    printf("String in lowercase : %s\n", Arr);

    return EXIT_SUCCESS;
}
