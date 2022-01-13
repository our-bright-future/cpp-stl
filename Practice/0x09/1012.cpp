#include <bits/stdc++.h>
using namespace std;

int board[50][50];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;
	while (T--) {
		int M, N, K;
		cin >> M >> N >> K;
		queue<pair<int, int>> Q;
		while (K--) {
			int X, Y;
			cin >> Y >> X;
			board[X][Y] = 1;
			Q.push({X, Y});
		}
		int cnt = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (board[i][j]) {
					queue<pair<int, int>> Q;
					Q.push({i, j});
					while (!Q.empty()) {
						pair<int, int> cur = Q.front(); Q.pop();
						board[cur.first][cur.second] = 0;
						for (int i = 0; i < 4; i++) {
							int nx = cur.first + dx[i];
							int ny = cur.first + dy[i];
							if (nx < 0 || N <= nx || ny < 0 || M <= ny) continue;
							if (!board[nx][ny]) continue;
							Q.push({nx, ny});
						}
					}
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
	}
}
