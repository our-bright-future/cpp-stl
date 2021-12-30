#include <bits/stdc++.h>
using namespace std;
string A, B;
int arr[26], ans;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> A >> B;
	for (char c: A) arr[c - 'a']++;
	for (char c: B) arr[c - 'a']--;
	for (int i = 0; i < 26; i++) {
		if (arr[i] < 0) ans -= arr[i];
		else if (0 < arr[i]) ans += arr[i];
	}
	cout << ans;
}
