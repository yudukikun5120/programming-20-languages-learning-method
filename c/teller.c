#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int x, i;
    srand((unsigned)time(NULL));
    x = rand() % 3;
    if (x == 0)
    {
        printf("大吉です\n");
    }
    else if (x == 1)
    {
        printf("普通です\n");
    }
    else
    {
        printf("凶です\n");
    }
    return 0;
}
