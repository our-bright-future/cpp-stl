#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

typedef pair<int, int> pii;
typedef pair<pii, int> ppi;

int L;
pii start;
pii dest;

int board[300][300];
int vis[300][300];
int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {1, -1, 2, -2, 2, -2, 1, -1};



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;
	while (T--) {
		cin >> L;
		cin >> start.X >> start.Y;
		cin >> dest.X >> dest.Y;

		for (int i = 0; i < L; i++) fill(vis[i], vis[i] + L, 0);

		queue<ppi> Q;
		Q.push({start, 0});
		vis[start.X][start.Y] = 1;
		while (!Q.empty()) {
			ppi cur = Q.front(); Q.pop();
			if (cur.X.X == dest.X && cur.X.Y == dest.Y) {
				cout << cur.Y << '\n';
				break;
			}
			for (int i = 0; i < 8; i++) {
				int nx = cur.X.X + dx[i];
				int ny = cur.X.Y + dy[i];
				if (nx < 0 || L <= nx || ny < 0 || L <= ny) continue;
				if (vis[nx][ny]) continue;
				Q.push({{nx, ny}, cur.Y + 1});
				vis[nx][ny] = 1;
			}
		}
	}
}
