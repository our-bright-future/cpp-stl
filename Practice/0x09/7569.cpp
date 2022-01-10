#include <bits/stdc++.h>
using namespace std;

queue<tuple<int, int, int>> Q;
int board[100][100][100];
int dx[6] = {1, 0, -1, 0, 0, 0};
int dy[6] = {0, 1, 0, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};
int n, m, h;
int day = -1;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> m >> n >> h;
	for (int k = 0; k < h; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> board[i][j][k];
				if (board[i][j][k] == 1) Q.push({i, j, k});
			}
		}
	}

	while (!Q.empty()) {
		tuple<int, int, int> cur = Q.front(); Q.pop();
		day = board[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
		for (int i = 0; i < 6; i++) {
			int nx = get<0>(cur) + dx[i];
			int ny = get<1>(cur) + dy[i];
			int nz = get<2>(cur) + dz[i];
			if (nx < 0 || n <= nx || ny < 0 || m <= ny
					|| nz < 0 || h <= nz) continue;
			if (board[nx][ny][nz] > 0 || board[nx][ny][nz] == -1)
				continue;
			Q.push({nx, ny, nz});
			board[nx][ny][nz] = day;
		}
	}

	day = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k <h; k++) {
				if (!board[i][j][k]) {
					cout << -1;
					return 0;
				}
				day = max(day, board[i][j][k]);
			}
		}
	}
	cout << day - 1;
}
