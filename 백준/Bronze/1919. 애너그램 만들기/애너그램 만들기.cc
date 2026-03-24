#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string str1, str2;
    int cnt1[26] = { 0 };
    int cnt2[26] = { 0 };
    int result = 0;

    cin >> str1 >> str2;

    for (int i = 0; i < str1.length(); i++) {
        cnt1[str1[i] - 'a']++;
    }

    for (int i = 0; i < str2.length(); i++) {
        cnt2[str2[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (cnt1[i] > cnt2[i]) {
            result += cnt1[i] - cnt2[i];
        }
        else {
            result += cnt2[i] - cnt1[i];
        }
    }

    cout << result;

    return 0;
}