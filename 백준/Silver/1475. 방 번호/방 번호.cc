#include <iostream>
#include <string>
using namespace std;

int main() {
    int plastic[10] = { 0 };
    int len = 0;
	int max = 0;
    string rnum;
    cin >> rnum;
    len = rnum.length();

	for (int i = 0; i < len; i++) {
		if (rnum[i] == '0') {
			plastic[0]++;
		}
		else if (rnum[i] == '1') {
			plastic[1]++;
		}
		else if (rnum[i] == '2') {
			plastic[2]++;
		}
		else if (rnum[i] == '3') {
			plastic[3]++;
		}
		else if (rnum[i] == '4') {
			plastic[4]++;
		}
		else if (rnum[i] == '5') {
			plastic[5]++;
		}
		else if (rnum[i] == '6') {
			plastic[6]++;
		}
		else if (rnum[i] == '7') {
			plastic[7]++;
		}
		else if (rnum[i] == '8') {
			plastic[8]++;
		}
		else if (rnum[i] == '9') {
			plastic[6]++;
		}
	}
	plastic[6] = (plastic[6] + 1) / 2;
	for (int i = 0; i < 10; i++) {
		if (plastic[i] > max) {
			max = plastic[i];
		}
	}
	cout << max;

    return 0;
}