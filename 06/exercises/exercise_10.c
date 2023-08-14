#include <stdio.h>

int main(void)
{
    for (int i = 3; i > 0; i--)
    {
        if (i == 2)
        {
            goto skip;
        }

        printf("%d\n", i);

        skip: ;
    }
    
    return 0;
}

