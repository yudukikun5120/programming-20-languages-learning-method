#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i, a, x;
    srand((unsigned)time(NULL));
    x = rand() % 10 + 1;
    printf("　数当てゲーム（1 〜 10）\n");
    for (i = 0; i < 5; i++)
    {
        printf("\n　入力 > ");
        scanf("%d", &a);
        if (a == x)
        {
            printf("　正解！！！\n");
            break;
        }
        else if (x == a - 1 || x == a + 1)
        {
            printf("　おしい！\n");
        }
        else
        {
            printf("　はずれ\n");
        }
    }
    if (x != a)
    {
        printf("\n\n　残念、時間切れ\n");
        printf("　またね！ \n");
    }
    return 0;
}
