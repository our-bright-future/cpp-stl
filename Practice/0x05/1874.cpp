#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	stack<int> S;
	int cur = 1;
	string buf;
	while (N--) {
		int n;
		cin >> n;
		if (cur <= n) {
			while (cur <= n) {
				S.push(cur++);
				buf.append("+");
			}
		}
		if (S.top() == n) {
			S.pop();
			buf.append("-");
		}
		else {
			cout << "NO";
			buf.clear();
			break;
		}
	}
	for (auto c : buf) cout << c << "\n";
}
