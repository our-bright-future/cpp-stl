#include <bits/stdc++.h>
using namespace std;

int N, A, B;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A >> B;
		cout << A + B << '\n';
	}
}
