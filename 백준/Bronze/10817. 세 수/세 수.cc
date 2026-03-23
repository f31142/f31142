#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int mid = 0;
	mid = a;

	
	if (a >= b && a >= c) {
		if (b >= c) {
			mid = b;
		}
		else if (b <= c) {
			mid = c;
		}
	}
	else if (b >= a && b >= c) {
		if (a >= c) {
			mid = a;
		}
		else if (a <= c) {
			mid = c;
		}
	}
	else if (c >= a && c >= b) {
		if (b >= a) {
			mid = b;
		}
		else if (a >= b) {
			mid = a;
		}
	}
	
	cout << mid;

	return 0;
}
