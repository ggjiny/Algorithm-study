#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	int a, b, sum=0;
	int m, u; //new
	int cnt = 0;
	u = n;
	while (1) {
		a = u / 10;
		b = u % 10;

		sum += a + b;
		if (sum >= 10)
			sum -= 10;
		m = b * 10 + sum;
		cnt++;
		if (n == m)
			break;
		else
			u = m;
		sum = 0;
	}
	cout << cnt;
}

