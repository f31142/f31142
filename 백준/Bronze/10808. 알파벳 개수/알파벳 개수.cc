#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int arr[26] = { 0 };

    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        for (int j = 97; j < 123; j++) {
            if (s[i] == j) {
                arr[j - 97]++;
            }
        }
    }
    
    for (int i = 0; i < 26; i++) {
        cout << arr[i]<< " ";
    }

    return 0;
}