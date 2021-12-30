#include <bits/stdc++.h>
using namespace std;
int N = 1, A;
int arr[10];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> A;
	N *= A;
	cin >> A;
	N *= A;
	cin >> A;
	N *= A;
	while (N > 0) {
		arr[N % 10]++;
		N /= 10;
	}
	for (int i = 0; i < 10; i++)
		cout << arr[i] << "\n";
}
