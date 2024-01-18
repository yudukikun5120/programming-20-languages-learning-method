#include <stdio.h>

int main(void)
{
    int a = 10, i;
    for (i = 0; i < 10; i++)
    {
        printf("%d    %d\n", i, i * a);
    }
    return 0;
}
