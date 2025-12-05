#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, m;
    int i, j;
    int ex = 0;
   
    scanf("%d %d", &n, &m);

    int arr[100];

    for (int z = 0;z < 100;z++) {
        arr[z] = z+1;
    }

    for (int x = 0;x < m;x++) {
        scanf("%d %d", &i, &j);
   
        ex = arr[i - 1];
        arr[i - 1] = arr[j - 1];
        arr[j - 1] = ex;

        
    }

    for (int y = 0;y < n;y++) {
        printf("%d ", arr[y]);
    }

    return 0;
}
