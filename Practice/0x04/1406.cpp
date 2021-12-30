#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string A;
	cin >> A;
	list<char> L;
	for (char c: A) L.push_back(c);
	auto t = L.end();
	int M;
	cin >> M;
	while (M--) {
		char oper;
		cin >> oper;
		if (oper == 'L') {
			if (t != L.begin()) t--;
		}
		else if (oper == 'D') {
			if (t != L.end()) t++;
		}
		else if (oper == 'B') {
			if (t != L.begin()) {
				t--;
				t = L.erase(t);
			}
		}
		else if (oper == 'P') {
			char ch;
			cin >> ch;
			L.insert(t, ch);
		}
	}
	for (char i: L) cout << i;
}
