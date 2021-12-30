#include <bits/stdc++.h>
using namespace std;
int N;
string A, B;
int arr[26];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A >> B;
		for (char c : A) arr[c - 'a']++;
		for (char c : B) arr[c - 'a']--;
		for (int j = 0; j < 26; j++) {
			if (arr[j] != 0) {
				cout << "Impossible\n";
				break;
			}
			else if (j == 25) cout << "Possible\n";
		}
		fill(arr, arr + 26, 0);
	}
}
