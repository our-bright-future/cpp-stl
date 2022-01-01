#include <bits/stdc++.h>
using namespace std;
deque<int> DQ;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	while (N--) {
		string oper;
		cin >> oper;
		if (oper == "push_front") {
			int n;
			cin >> n;
			DQ.push_front(n);
		}
		else if (oper == "push_back") {
			int n;
			cin >> n;
			DQ.push_back(n);
		}
		else if (oper == "pop_front") {
			if (DQ.empty()) cout << -1 << "\n";
			else {
				cout << DQ.front() << "\n";
				DQ.pop_front();
			}
		}
		else if (oper == "pop_back") {
			if (DQ.empty()) cout << -1 << "\n";
			else {
				cout << DQ.back() << "\n";
				DQ.pop_back();
			}
		}
		else if (oper == "size") {
			cout << DQ.size() << "\n";
		}
		else if (oper == "empty") {
			cout << DQ.empty() << "\n";
		}
		else if (oper == "front") {
			if (DQ.empty()) cout << -1 << "\n";
			else cout << DQ.front() << "\n";
		}
		else {
			if (DQ.empty()) cout << -1 << "\n";
			else cout << DQ.back() << "\n";
		}
	}
}
