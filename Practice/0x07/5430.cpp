#include <bits/stdc++.h>
using namespace std;

void parse(string array, deque<int> &DQ)
{
	int v = 0;
	for (int i = 1; i + 1 < array.size(); i++) {
		if (strchr(",", array[i])) {
			DQ.push_back(v);
			v = 0;
		}
		else
			v = v * 10 + array[i] - '0';
	}
	if (v != 0) DQ.push_back(v);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;
	while (T--) {
		deque<int> DQ;
		string op, query;
		int n;
		int rev = 0, ecode = 0;

		cin >> op;
		cin >> n;
		cin >> query;
		parse(query, DQ);

		for (auto p: op) {
			if (p == 'R') rev = 1 - rev;
			else {
				if (DQ.empty()) {
					ecode = 1;
					break ;
				}
				if (rev) DQ.pop_back();
				else DQ.pop_front();
			}
		}

		if (ecode) cout << "error\n";
		else {
			cout << "[";
			if (rev) reverse(DQ.begin(), DQ.end());
			while (!DQ.empty()) {
				cout << DQ.front();
				if (DQ.size() > 1) cout << ",";
				DQ.pop_front();
			}
			cout << "]\n";
		}
	}
}
