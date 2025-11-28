#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char S[1001];

    scanf("%s", S);
    int len = strlen(S);

    for (int i = 0; i < len; i++) {

        if (S[i] >= 'a' && S[i] <= 'z')
            S[i] = S[i] - 32;

        else if (S[i] >= 'A' && S[i] <= 'Z')
            S[i] = S[i] + 32;
    }

    printf("%s\n", S);


    return 0;
}