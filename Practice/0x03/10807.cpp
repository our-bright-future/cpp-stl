#include <bits/stdc++.h>
using namespace std;
int N, v;
int arr[201];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> v;
		arr[v + 100]++;
	}
	cin >> v;
	cout << arr[v + 100];
}
