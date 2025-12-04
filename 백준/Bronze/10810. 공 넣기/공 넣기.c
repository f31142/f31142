#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, m;
    int i, j, k;
   
    scanf("%d %d", &n, &m);

    int arr[100];

    for (int z = 0;z < 100;z++) {
        arr[z] = 0;
    }

    for (int x = 0;x < m;x++) {
        scanf("%d %d %d", &i, &j, &k);

        for (;i-1 <= j-1; i++) {
            arr[i-1] = k;
        }
    }

    for (int y = 0;y < n;y++) {
        printf("%d ", arr[y]);
    }

    return 0;
}
