#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;

	int k, arr[100];
	vector<int> dp;
	for (int i = 0; i < n; i++) {
		cin >> k;
		arr[i] = k;
	}
	for (int i = 0; i <= m; i++) {
		dp.push_back(10001);
	}

	dp[0] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = arr[i]; j <= m; j++){
			if (dp[j - arr[i]] != 10001) {
				dp[j] = min(dp[j], dp[j - arr[i]] + 1);
			}
		}
	}
	if (dp[m] == 10001)
		cout << -1;
	else
		cout << dp[m];
}