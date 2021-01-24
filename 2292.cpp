/*#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;

	int m1=0;
	int m2 = 0;
	int sol = 0;

	if (n == 1) {
		sol = 1;
	}
	else {
		for (int i = 0;; i++) {
			for (int j = 0; j <= i; j++) {
				m2++;
				if (j != i) {
					m1++;
				}
			}
			if (n >= 6 * m1 + 2 && n <= 6 * m2 + 1) {
				sol = i + 2;
				break;
			}
		}
	}
	
	cout << sol;
}*/