#include <stdio.h>

int main(void)
{
    int x;
    printf("好きな整数を入力してください\n");
    scanf("%d", &x);
    printf("その10倍は%dです\n", x * 10);
    return 0;
}
