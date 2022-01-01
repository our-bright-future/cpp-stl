#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	stack<int> S;
	int N;
	cin >> N;
	while (N--) {
		string op;
		cin >> op;
		if (op == "push") {
			int n;
			cin >> n;
			S.push(n);
		}
		else if (op == "pop") {
			if (!S.empty()) {
				cout << S.top() << "\n";
				S.pop();
			}
			else cout << -1 << "\n";
		}
		else if (op == "size") {
			cout << S.size() << "\n";
		}
		else if (op == "empty") {
			cout << S.empty() << "\n";
		}
		else if (op == "top") {
			if (!S.empty()) cout << S.top() << "\n";
			else cout << -1 << "\n";
		}
	}
}
