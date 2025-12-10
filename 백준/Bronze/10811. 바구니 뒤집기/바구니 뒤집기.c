#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int arr[100];
    int n, m;

    scanf("%d %d", &n, &m);

    
    for (int x = 0; x < n; x++) {
        arr[x] = x + 1;
    }

    
    for (int x = 0; x < m; x++) {
        int i, j;
        scanf("%d %d", &i, &j);

       
        int left = i - 1;
        int right = j - 1;

      
        while (left < right) {
            int tmp;
            tmp = arr[left];
            arr[left] = arr[right];
            arr[right] = tmp;
            left++;
            right--;
        }
    }

    
    for (int x = 0; x < n; x++) {
        printf("%d ", arr[x]);
    }

    return 0;
}