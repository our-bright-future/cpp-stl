#include <bits/stdc++.h>
using namespace std;

int a[1000000];
int ans[1000000];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	stack<int> S;
	cin >> N;
	for (int i = 0; i < N; i++) cin >> a[i];
	for (int i = N - 1; i >= 0; i--) {
		while (!S.empty() && S.top() <= a[i])
			S.pop();
		if (S.empty())
			ans[i] = -1;
		else ans[i] = S.top();
		S.push(a[i]);
	}
	for (int i = 0; i < N; i++) cout << ans[i] << " ";
}
