#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

queue<pair<int, int>> Q;
int board[1000][1000];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m;
int day = -1;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
			if (board[i][j] == 1) Q.push({i, j});
		}
	}

	while (!Q.empty()) {
		pair<int, int> cur = Q.front(); Q.pop();
		day = board[cur.X][cur.Y] + 1;
		for (int i = 0; i < 4; i++) {
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];
			if (nx < 0 || n <= nx || ny < 0 || m <= ny)
				continue;
			if (board[nx][ny] > 0 || board[nx][ny] == -1)
				continue;
			Q.push({nx, ny});
			board[nx][ny] = day;
		}
	}

	day = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (!board[i][j]) {
				cout << -1;
				return 0;
			}
			day = max(day, board[i][j]);
		}
	}
	cout << day - 1;
}
