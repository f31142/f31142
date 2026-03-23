#include <iostream>
using namespace std;

int main() {
	int n;
	int tmp1, tmp2, cycle = 0;
	int sum = 0;

	cin >> n;
	sum = n;
	while (1) {
		if (sum < 10) {
			tmp1 = 0;
			tmp2 = sum % 10;
			sum = 10 * tmp2 + ((tmp1 + tmp2) % 10);
		}
		else {
			tmp1 = sum / 10;
			tmp2 = sum % 10;
			sum = 10 * tmp2 + ((tmp1 + tmp2) % 10);
		}
		cycle++;
		if (n == sum) {
			break;
		}
	}
	cout << cycle;
	return 0;
}
