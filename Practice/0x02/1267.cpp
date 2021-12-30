#include <bits/stdc++.h>
using namespace std;

int N, ct;
int Y, M;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> ct;
		Y += ((ct / 30) + 1) * 10;
		M += ((ct / 60) + 1) * 15;
	}
	if (Y <= M) {
		cout << "Y ";
		if (Y != M) cout << Y;
		else cout << "M " << M;
	}
	else cout << "M " << M;
}
