#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;

	int m = 1000 - n;
	int count=0;
	
	if (m >= 500) {
		m -= 500;
		count++;
	}
	count += m / 100; 
	m %= 100;
	if (m / 10 >= 5) {
		m -= 50;
		count++;
	}
	count += m / 10;
	m %= 10;
	if (m >= 5) {
		m -= 5;
		count++;
	}
	count += m;
	cout << count;
}