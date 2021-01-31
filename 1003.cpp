#include <iostream>
#include <vector>
using namespace std;


int main(void) {
	int t;
	cin >> t;
	
	int dp[41] = { 0,1,1 };
	for (int i = 3; i < 41; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	
	int m;
	for (int i = 0; i < t; i++) {
		cin >> m;
		if (m == 0) {
			cout << 1 << " " << 0<<"\n";
		}
		else if (m == 1) {
			cout << 0 << " " << 1 << "\n";
		}
		else
			cout << dp[m - 1] << " " << dp[m] << "\n";
	}
}