#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n;
	cin >> n;

	int m = 0, sum = 0;
	vector<int> sol;
	for (int i = 1; i <= 54; i++) {
		m = n - i;
		sum = 0;
		while (m != 0) {
			sum += m % 10;
			m /= 10;
		}
		if (sum == i) {
			sol.push_back(sum);
		}
	}
	
	int max = 0;
	for (int i = 0; i < sol.size(); i++) {
		if (sol[i] > max) {
			max = sol[i];
		}
	}

	if (sol.size() > 0) {
		cout << n - max;
	}
	else {
		cout << 0;
	}
}