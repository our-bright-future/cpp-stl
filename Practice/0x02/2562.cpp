#include <bits/stdc++.h>
using namespace std;
int arr[9];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 0; i < 9; i++) cin >> arr[i];
	cout << *max_element(arr, arr + 9) << "\n";
	cout << max_element(arr, arr + 9) - arr + 1;
}
