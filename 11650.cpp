/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<pair<int, int>> cd;

	int x, y;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		cd.push_back(make_pair(x, y));
	}
	sort(cd.begin(), cd.end());

	for (int i = 0; i < n; i++) {
		cout << cd[i].first <<" "<< cd[i].second << "\n";
	}
}*/