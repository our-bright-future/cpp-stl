#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (1) {
		stack<char> S;
		string line;
		int error = 0;
		getline(cin, line);
		if (line == ".") break;
		for (char c: line) {
			if (c == '(' || c == '[') S.push(c);
			else if (c == ')' || c == ']') {
				if (S.empty()) {
					error = 1;
					break;
				}
				else if (c == ')' && S.top() != '(') {
					error = 1;
					break;
				}
				else if (c == ']' && S.top() != '[') {
					error = 1;
					break;
				}
				else S.pop();
			}
		}
		if (!S.empty() || error) cout << "no\n";
		else cout << "yes\n";
	}
}
