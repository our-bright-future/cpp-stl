#include <bits/stdc++.h>
using namespace std;

queue<pair<int, int>> Q;
int flr[1000001];
int cnt;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int F, S, G, UD[2];
	cin >> F >> S >> G >> UD[0] >> UD[1];
	UD[1] *= -1;
	Q.push({S, 0});
	flr[S] = 1;
	while (!Q.empty()) {
		pair<int, int> cur = Q.front(); Q.pop();
		if (cur.first == G) {
			cout << cur.second;
			break;
		}
		for (int i = 0; i < 2; i++) {
			int nx = cur.first + UD[i];
			if (nx < 1 || F < nx) continue;
			if (flr[nx]) continue;
			Q.push({nx, cur.second + 1});
			flr[nx] = 1;
		}
		if (Q.empty()) cout << "use the stairs";
	}
}
