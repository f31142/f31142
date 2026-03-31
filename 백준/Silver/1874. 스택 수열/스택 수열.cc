#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int target;
    int num = 1;
    cin >> n;

    stack<int> st;
   
    string result = "";

    for (int i = 0; i < n; i++) {     
        cin >> target;

        while (num <= target) {
            st.push(num);
            result +="+\n";
            num++;
        }

        if (st.top() == target) {
            st.pop();
            result +="-\n";
        }
        else {
            cout << "NO\n";
            return 0;
        }
    }

    cout << result;
    return 0;
}