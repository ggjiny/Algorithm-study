/*#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n, k;
	cin >> n >> k;

	vector<int> a;
	vector<int> b;
	for (int i = 0; i < n; i++) { //ÃÊ±âÈ­
		a.push_back(1);
	}

	int i = 0;
	int j = 0;
	while (1) {
		int count = 0;
		while (1) {
			if (count == k) {
				a[i-1] = 0;
				break;
			}
			if (i > n - 1) {
				i -= n;
			}
			if(a[i]==1) {
				count++;
			}
			i++;
		}
		j++;
		b.push_back(i);
		if (j == n) {
			break;
		}
	}

	cout << "<";
	for (i = 0; i < n-1; i++) {
		cout << b[i] << ", ";
	}
	cout << b[n - 1] << ">";

}*/