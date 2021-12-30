#include <bits/stdc++.h>
using namespace std;
int N, r;
int arr[10];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	while (N > 0) {
		arr[N % 10]++;
		N /= 10;
	}
	r = arr[6] + arr[9];
	arr[6] = r / 2 + r % 2;
	arr[9] = r / 2 + r % 2;
	N = max_element(arr, arr + 10) - arr;
	cout << *max_element(arr, arr + 10);
}
