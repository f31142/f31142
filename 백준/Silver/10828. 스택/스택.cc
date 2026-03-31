#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int x;
    int cnt = 0;
    int result;
    string order;

    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> order;
        if (order == "push") {
            cin >> x;
            arr[cnt] = x;
            cnt++;
        }
        else if (order == "pop") {
            if (cnt == 0) {
                cout << -1 << "\n";
            }
            else {
                cout << arr[cnt-1] << "\n";
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
        else if (order == "top") {
            if (cnt == 0) {
                cout << -1 << "\n";
            }
            else {
                cout << arr[cnt - 1] << "\n";
            }
        }
    }

    delete[] arr;
    
   

    return 0;
}