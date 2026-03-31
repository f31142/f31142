#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int x;
    int cnt = 0;
    string order;

    cin >> n;
    int front = n;
    int back = n;

    int* arr = new int[2 * n];

    for (int i = 0; i < n; i++) {
        cin >> order;
        if (order == "push_front") {
            cin >> x;
            front--;
            arr[front] = x;
            cnt++;
        }
        else if (order == "push_back") {
            cin >> x;
            arr[back] = x;
            back++;
            cnt++;
        }
        else if (order == "pop_front") {
            if (cnt == 0) {
                cout << -1 << "\n";
            }
            else {
                cout << arr[front] << "\n";
                front++;
                cnt--;
            }
        }
        else if (order == "pop_back") {
            if (cnt == 0) {
                cout << -1 << "\n";
            }
            else {
                cout << arr[back - 1] << "\n";
                back--;
                cnt--;
            }
        }
        else if (order == "size") {
            cout << cnt << "\n";
        }
        else if (order == "empty") {
            if (cnt == 0) {
                cout << 1 << "\n";
            }
            else {
                cout << 0 << "\n";
            }
        }
        else if (order == "front") {
            if (cnt == 0) {
                cout << -1 << "\n";
            }
            else {
                cout << arr[front] << "\n";
            }
        }
        else if (order == "back") {
            if (cnt == 0) {
                cout << -1 << "\n";
            }
            else {
                cout << arr[back-1] << "\n";
            }
        }
    }

    delete[] arr;



    return 0;
}