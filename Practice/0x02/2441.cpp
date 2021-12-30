#include <bits/stdc++.h>
using namespace std;
int N;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (j < i) cout << " ";
			else cout << "*";
		}
		cout << "\n";
	}
}
