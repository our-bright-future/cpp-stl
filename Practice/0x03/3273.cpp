#include <bits/stdc++.h>
using namespace std;
int n, x, cnt;
int arr[100000];
int appear[2000001];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		appear[arr[i]] = 1;
	}
	cin >> x;
	for (int i = 0; i < n; i++)
		if (arr[i] <= x)
			cnt += appear[x - arr[i]];
	cout << cnt / 2;
}
