#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    long long result = 0;
    string num;
    int arr[10] = { 0 };
    cin >> a;
    cin >> b;
    cin >> c;
    
    result = a * b * c;
    num = to_string(result);

    for (int i = 0; i < num.length(); i++) {
        for (int j = 48; j < 58; j++) {
            if (num[i] == j) {
                arr[j - 48]++;
            }
        }
    }
    
    for (int i = 0; i < 10; i++) {
        cout << arr[i]<< "\n";
    }

    return 0;
}