#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main(void) {
	int n;
	cin >> n;

	deque<int> dq;
	vector<int> v;
	string command;
	int x;

	for (int i = 0; i < n; i++) {
		cin >> command;
		if (command == "push_front") {
			cin >> x;
			dq.push_front(x);
		}
		else if (command == "push_back") {
			cin >> x;
			dq.push_back(x);
		}
		else if (command == "pop_front") {
			if (dq.empty()) {
				v.push_back(-1);
				continue;
			}
			v.push_back(dq.front());
			dq.pop_front();
		}
		else if (command == "pop_back") {
			if (dq.empty()) {
				v.push_back(-1);
				continue;
			}
			v.push_back(dq.back());
			dq.pop_back();
		}
		else if (command == "size") {
			v.push_back(dq.size());
		}
		else if (command == "empty") {
			if (dq.empty())
				v.push_back(1);
			else
				v.push_back(0);
		}
		else if (command == "front") {
			if (dq.empty()) {
				v.push_back(-1);
				continue;
			}
			v.push_back(dq.front());
		}
		else if (command == "back") {
			if (dq.empty()) {
				v.push_back(-1);
				continue;
			}
			v.push_back(dq.back());
		}
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}