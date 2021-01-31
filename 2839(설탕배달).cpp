#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 5000

int main(void) {
	int n;
	cin >> n;

	int dp[5001] = { MAX, MAX, MAX, 1, MAX, 1 };

	for (int i = 6; i <= n; i++) {
		dp[i] = min(dp[i - 3] + 1, dp[i - 5] + 1);
	}

	if ((dp[n] != MAX) && (dp[n] != MAX + 1)) {
		cout << dp[n];
	}
	else
		cout << -1;
	
}

