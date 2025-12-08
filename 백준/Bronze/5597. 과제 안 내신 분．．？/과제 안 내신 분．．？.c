#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    int arr[30];
    int n;

    for (int i = 0; i < 30; i++) {
        arr[i] = 0;
    }

    for (int j = 0; j < 28; j++) {
        scanf("%d", &n);
        arr[n-1] = n;
    }

    for (int k = 0; k < 30; k++) {
        if (arr[k] != k + 1)
            printf("%d\n", k+1);
    }
        
    return 0;
}
