#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, n;
	long long cnt = 0;
	stack<int> S;
	cin >> N;
	while (N--) {
		cin >> n;
		while (!S.empty() && S.top() <= n)
			S.pop();
		cnt += S.size();
		S.push(n);
	}
	cout << cnt;
}
