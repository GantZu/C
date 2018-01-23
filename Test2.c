#include <stdio.h>
#include <string.h>

void reverse_string(char *str)
{
    /* skip null */
    if (str == 0)
    {
        return;
    }

    /* skip empty string */
    if (*str == 0)
    {
        return;
    }

    /* get range */
    char *start = str;
    char *end = start + strlen(str) - 1; /* -1 for \0 */
    char temp;

    /* reverse */
    while (end > start)
    {
        /* swap */
        temp = *start;
        *start = *end;
        *end = temp;

        /* move */
        ++start;
        --end;
    }
}


int main(void)
{
    char s1[50];
    
    printf("Please input a string\n");
    scanf("%s\n",s1);
    reverse_string(s1);
    printf("%s\n", s1);
    return 0;
}