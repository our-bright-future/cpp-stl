#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, cnt = 0;
	string word;
	cin >> N;
	while (N--) {
		stack<char> S;
		cin >> word;
		for (auto c: word) {
			if (!S.empty()) {
				if (S.top() == c) S.pop();
				else S.push(c);
			}
			else S.push(c);
		}
		if (S.empty()) cnt++;
	}
	cout << cnt;
}
