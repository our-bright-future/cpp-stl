#include <bits/stdc++.h>
using namespace std;
int N, K, grade, gender;
int arr[6][2];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> gender >> grade;
		arr[grade - 1][gender]++;
	}
	N = 0;
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 2; j++)
			N += arr[i][j] / K + (arr[i][j] % K > 0);
	cout << N;
}
