#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[500][500];
int vis[500][500];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m;
int mx, cnt;

int BFS_size(int x, int y) {
	queue<pair<int, int>> Q;
	int area = 0;

	Q.push({x, y});
	vis[x][y] = 1;
	while (!Q.empty()) {
		pair<int, int> cur = Q.front(); Q.pop();
		area++;
		for (int i = 0; i < 4; i++) {
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];
			if (nx < 0 || n <= nx || ny < 0 || m <= ny)
				continue;
			if (vis[nx][ny] || !board[nx][ny])
				continue;
			Q.push({nx, ny});
			vis[nx][ny] = 1;
		}
	}
	return (area);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> board[i][j];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] && !vis[i][j]) {
				int cur = BFS_size(i, j);
				mx = max(mx, cur);
				cnt++;
			}
		}
	}
	cout << cnt << "\n" << mx;
}
