#include <bits/stdc++.h>
using namespace std;
int N;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < 2 * N - 1; i++) {
		for (int j = 0; j < 2 * N; j++) {
			if (i < N) {
				if (j < i + 1 || 2 * N - 1 - i <= j)
					cout << "*";
				else cout << " ";
			}
			else {
				if (j < 2 * N - 1 - i || i < j)
					cout << "*";
				else cout << " ";
			}
		}
		cout << "\n";
	}
}
