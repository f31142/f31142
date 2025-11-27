#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    while (1) {
        int a, b;
        scanf("%d %d", &a, &b);

        int last = a % 10;

        int cycle[10][4] = {
            {0}, {1}, {2,4,8,6}, {3,9,7,1}, {4,6}, {5}, {6}, {7,9,3,1}, {8,4,2,6}, {9,1}
        };

        int cycle_len[10] = {1,1,4,4,2,1,1,4,4,2};

        int len = cycle_len[last];
        int index = (b - 1) % len;
        int result = cycle[last][index];

        if (result == 0) result = 10;

        printf("%d\n", result);

        n--;
        if (n == 0)
            break;
    }

    return 0;
}
