#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, total = 0, min = 100;
	for (int i = 0; i < 7; i++) {
		cin >> n;
		if (n % 2) {
			total += n;
			if (min > n)
				min = n;
		}
	}
	if (total)
		cout << total << "\n" << min;
	else
		cout << -1;
}
