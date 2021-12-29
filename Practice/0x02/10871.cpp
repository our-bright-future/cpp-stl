#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, X, n;
	cin >> N >> X;
	for (int i = 0; i < N; i++) {
		cin >> n;
		if (n < X)
			cout << n << " ";
	}
}
