#include <bits/stdc++.h>
using namespace std;

long long A, B;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> A >> B;
	if (A < B) swap(A, B);
	if (A == B || A - B == 1) cout << 0;
	else {
		cout << A - B - 1 << "\n";
		for (long long i = B + 1; i < A; i++)
			cout << i << " ";
	}
}
