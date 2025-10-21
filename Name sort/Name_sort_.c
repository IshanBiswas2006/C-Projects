#include <stdio.h>
#include <string.h>

int main()
{
    char s[50];
    int i;

    printf("Enter a name\n");
    gets(s);

    printf("The initials of the name is\n");
    for (i = 0; i < strlen(s); i++)
    {
        if (i == 0 && s[i] != ' ')
        {
            printf("%c", s[i]);
        }
        else if (s[i] == ' ' && s[i + 1] != ' ')
        {
            printf(".%c", s[i + 1]);
        }
    }
    return 0;
}