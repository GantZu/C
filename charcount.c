#include <stdio.h>

/*copy input to output; 1st version*/
void main()
{
    int c, n1;

    n1 = 0;
    while((c = getchar()) != EOF)
        if (c == '\n')
            n1++;
    printf("\n%d\n", n1);
}