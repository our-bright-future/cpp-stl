#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<char> S;
	int cnt = 0;
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') S.push(str[i]);
		else {
			S.pop();
			if (str[i - 1] != str[i])
				cnt += S.size();
			else cnt++;
		}
	}
	cout << cnt;
}
