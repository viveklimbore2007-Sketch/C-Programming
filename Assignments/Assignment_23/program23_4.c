
#include<stdio.h>
#include<stdlib.h>

void DisplayDigits(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            printf("%c", str[i]);
        }

        i++;
    }
}

int main()
{
    char Arr[100];

    printf("Enter a string : ");
    scanf("%[^\n]", Arr);

    DisplayDigits(Arr);

    return EXIT_SUCCESS;
}
