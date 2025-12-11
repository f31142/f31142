#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char str[100];
    int cnt = 0;

    for (int i = 0; i < 100; i++) {
        str[i] = 0;
    }

    scanf("%s", str);

    for (int i = 0; i < 100; i++) {
        if (str[i] != 0) {
            cnt++;
        }
    }

    printf("%d", cnt);



    return 0;
}