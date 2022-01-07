#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<char> S;
	int sum = 0;
	int mul = 1;
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			S.push(str[i]);
			mul *= 2;
		}
		else if (str[i] == '[') {
			S.push(str[i]);
			mul *= 3;
		}
		else if (str[i] == ')') {
			if (S.empty() || S.top() != '(') {
				cout << 0;
				return 0;
			}
			if (str[i - 1] == '(') sum += mul;
			S.pop();
			mul /= 2;
		}
		else if (str[i] == ']') {
			if (S.empty() || S.top() != '[') {
				cout << 0;
				return 0;
			}
			if (str[i - 1] == '[') sum += mul;
			S.pop();
			mul /= 3;
		}
	}
	if (!S.empty()) cout << 0;
	else cout << sum;
}
