#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	queue<int> int_queue;
	int length;
	cin >> length;
	for (int i = 0; i < length; i++) { //while (length--)
		string input;
		cin >> input;
		if (input == "push") {
			int tmp;
			cin >> tmp;
			int_queue.push(tmp);
		}
		else if (input == "pop") {
			if (int_queue.empty()) {
				cout << "-1\n";
			}
			else {
				cout << int_queue.front() << '\n'; //pop 맨 앞의 것
				int_queue.pop();
			}
		}
		else if (input == "empty") {
			cout << (int_queue.empty() ? 1 : 0) << '\n';
		}
		else if (input == "size") {
			cout << int_queue.size() << '\n';
		}
		else if (input == "front") {
			if (int_queue.empty()) {
				cout << "-1\n";
			}
			else {
				cout << int_queue.front() << '\n';
			}

		}
		else if (input == "back") {
			if (int_queue.empty()) {
				cout << "-1\n";
			}
			else {
				cout << int_queue.back() << '\n';
			}

		}
	}
	return 0;
}