#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void strlwrx(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main()
{
    char Arr[100];

    printf("Enter a string : ");
    scanf("%[^'\n']s", Arr);

    strlwrx(Arr);

    printf("String in uppercase : %s\n", Arr);

    return EXIT_SUCCESS;
}