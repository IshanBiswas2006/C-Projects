#include <stdio.h>
#include <string.h>

int main()
{
    char s[50];
    int i, lsp;

    printf("Enter a name\n");
    gets(s);

    // Finding the last space position
    for (i = strlen(s) - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            lsp = i;
            break;
        }
    }

    printf("The initials of the name is\n");
    for (i = 0; i < lsp; i++)
    {
        if (i == 0 && s[i] != ' ')
        {
            printf("%c.", s[i]);
        }
        else if (s[i] == ' ' && s[i + 1] != ' ')
        {
            printf("%c.", s[i + 1]);
        }
    }

    // Printing the title
    for (i = lsp; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }
    return 0;
}