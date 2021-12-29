#include <bits/stdc++.h>
using namespace std;

int arr[9], result[7], total;

// int is_valid(int v, int cnt) {
// 	for (int i = 0; i < cnt; i++)
// 		if (v == result[i])
// 			return (0);
// 	return (1);
// }

// int find_seven(int cnt) {
// 	if (cnt == 7) {
// 		total = 0;
// 		for (int i = 0; i < 7; i++)
// 			total += result[i];
// 		if (total == 100) {
// 			for (int i = 0; i < 7; i++)
// 				cout << result[i] << "\n";
// 			return (1);
// 		}
// 		return (0);
// 	}
// 	for (int i = 0; i < 9; i++) {
// 		result[cnt] = arr[i];
// 		if (is_valid(arr[i], cnt))
// 			if (find_seven(cnt + 1))
// 				return (1);
// 	}
// }

void print_except(int a, int b)
{
	for (int i = 0; i < 9; i++) {
		if (i == a || i == b) continue;
		cout << arr[i] << "\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		total += arr[i];
	}
	sort(arr, arr + 9);
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (total - arr[i] - arr[j] == 100) {
				print_except(i, j);
				return 0;
			}
		}
	}
}
