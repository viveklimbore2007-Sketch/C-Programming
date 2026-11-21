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
        else if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        str++;
    }
}

int main()
{
    char Arr[100];

    printf("Enter a string : ");
    scanf("%[^\n]", Arr);

    strlwrx(Arr);

    printf("String after toggling case : %s\n", Arr);

    return EXIT_SUCCESS;
}