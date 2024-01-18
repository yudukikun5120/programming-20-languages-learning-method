#include <stdio.h>

int main(void)
{
    int a;
    printf("今は朝ですか、昼ですか？\n");
    printf("1 朝 2 昼 > ");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("おはよう\n");
    }
    else if (a == 2)
    {
        printf("こんにちは\n");
    }
    else
    {
        printf("こんばんは・・・かな\n");
    }
    return 0;
}
