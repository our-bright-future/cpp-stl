#include <bits/stdc++.h>
using namespace std;
string S;
int arr[26];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> S;
	for (char s : S)
		arr[s - 'a']++;
	for (int i = 0; i < 26; i++)
		cout << arr[i] << " ";
}
