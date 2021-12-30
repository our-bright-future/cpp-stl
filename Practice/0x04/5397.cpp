#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	while (N--) {
		string log;
		cin >> log;
		list<char> pw;
		auto t = pw.begin();
		for (char c: log) {
			if (c == '<') {
				if (t != pw.begin()) t--;
			}
			else if (c == '>') {
				if (t != pw.end()) t++;
			}
			else if (c == '-') {
				if (t != pw.begin()) {
					t--;
					t = pw.erase(t);
				}
			}
			else pw.insert(t, c);
		}
		for (auto c: pw) cout << c;
		cout << "\n";
	}
}
