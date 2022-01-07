#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	while (N--) {
		stack<char> S;
		int valid = 1;
		string paren;
		cin >> paren;
		for (auto p: paren) {
			if (p == '(') S.push(p);
			else if (S.empty()) {
				valid = 0;
				break;
			}
			else S.pop();
		}
		if (!S.empty()) valid = 0;
		if (valid) cout << "YES\n";
		else cout << "NO\n";
	}
}
