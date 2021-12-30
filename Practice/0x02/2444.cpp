#include <bits/stdc++.h>
using namespace std;
int N;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < 2 * N - 1; i++) {
		for (int j = 0; j < 2 * N - 1; j++) {
			if (i < N) {
				if (j < N - 1 - i) cout << " ";
				else if (j <= N - 1 + i) cout << "*";
				else break;
			}
			else {
				if (j <= i - N) cout << " ";
				else if (j < 3 * N - 2 - i) cout << "*";
				else break;
			}
		}
		cout << "\n";
	}
}
