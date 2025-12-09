int main(void)
{
    int arr[42] = {0};
    int n = 0;
    int cnt = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        arr[n%42] = 1;
    }

    for (int j = 0; j < 42; j++) {
        if (arr[j] == 1)
            cnt++;
    }

    printf("%d", cnt);

    
        
    return 0;
}