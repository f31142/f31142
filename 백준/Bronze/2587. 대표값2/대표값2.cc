#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[5];
    int sum = 0;
    int mid, avg = 0;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    avg = sum / 5;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                mid = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = mid;
            }
        }
    }
    mid = arr[2];
    cout << avg << "\n" << mid;


    return 0;
}