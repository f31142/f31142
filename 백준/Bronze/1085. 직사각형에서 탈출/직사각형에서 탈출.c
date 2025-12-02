#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    int x, y, w, h;
    int a1, a2 = 0;
    int result = 0;

    scanf("%d %d %d %d", &x, &y, &w, &h);

    a1 = w - x;
    if (a1 > x)
        a1 = x;

    a2 = h - y;
    if (a2 > y)
        a2 = y;
    
    if (a1 <= a2) 
        result = a1;
    

    if (a2 <= a1) 
        result = a2;
      
    printf("%d", result);

    return 0;
}

