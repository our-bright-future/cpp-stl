#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

queue<pair<int, int>> Q;
int board[100][100];
int vis[100][100];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m;
int dist;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char c;
			cin >> c;
			board[i][j] = c - '0';
		}
	}

	Q.push({0, 0});
	vis[0][0] = 1;
	while (!Q.empty()) {
		pair<int, int> cur = Q.front(); Q.pop();
		dist = board[cur.X][cur.Y] + 1;
		for (int i = 0; i < 4; i++) {
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];
			if (nx < 0 || n <= nx || ny < 0 || m <= ny)
				continue;
			if (vis[nx][ny] || !board[nx][ny])
				continue;
			Q.push({nx, ny});
			vis[nx][ny] = 1;
			board[nx][ny] = dist;
		}
	}
	cout << board[n - 1][m - 1];
}
