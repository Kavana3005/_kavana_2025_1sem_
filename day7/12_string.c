#include <stdio.h>
#include<string.h>
int main()
{
    char first_name[] = "sri";
    char last_name[] = "seeva";
    char another_name[] = "sri";
    printf("length of first _name: %d \n", strlen(first_name));
    printf("full name: %s\n", strcat(first_name, last_name));
    printf("%d\n", strcmp(first_name, another_name));
    if (strcmp(first_name, another_name) == 0)
    {
        printf("both strings are equal \n");
    }
    else
    {
        printf("both the strings are not equal\n");
    }
}
