#include <bits/stdc++.h>
using namespace std;
int N;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i + 1; j++)
			cout << "*";
		cout << '\n';
	}
}
