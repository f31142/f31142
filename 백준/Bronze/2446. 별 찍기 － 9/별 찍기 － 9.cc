#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int k = n + i-1; k > n; k--) {
			cout << " ";
		}
		for (int j = 2*(n-i)+1; j > 0; j--) {
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = 1; i < n;i++) {
		for (int j = n - i - 1; j > 0; j--) {
			cout << " ";
		}
		for (int k = n + 2 * i + 1; k > n; k--) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}