#include <stdio.h>
#include <string.h>

int main()
{
    char s[50];
    char s2[50] = "Ishan@2006";

    do
    {
        printf("Enter a string: ");
        gets(s);

        if (strcmp(s, s2) == 0)
        {
            printf("correct password\n");
            break;
        }
        else
        {
            printf("wrong password try again\n");
        }
    } while (1);

    return 0;
}
