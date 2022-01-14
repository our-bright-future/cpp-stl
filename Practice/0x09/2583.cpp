#include <bits/stdc++.h>
using namespace std;

int board[100][100];
int vis[100][100];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int M, N, K;

int BFS_width(int x, int y) {
	int pop_cnt = 0;
	queue<pair<int, int>> Q;
	Q.push({x, y});
	vis[x][y] = 1;
	while (!Q.empty()) {
		pair<int, int> cur = Q.front(); Q.pop();
		pop_cnt++;
		for (int i = 0; i < 4; i++) {
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if (nx < 0 || M <= nx || ny < 0 || N <= ny) continue;
			if (vis[nx][ny] || board[nx][ny]) continue;
			Q.push({nx, ny});
			vis[nx][ny] = 1;
		}
	}
	return (pop_cnt);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> M >> N >> K;
	while (K--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = y1; i < y2; i++)
			for (int j = x1; j < x2; j++)
				board[i][j] = 1;
	}

	vector<int> V;
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			if (!vis[i][j] && !board[i][j])
				V.push_back(BFS_width(i, j));
	sort(V.begin(), V.begin() + V.size());
	cout << V.size() << "\n";
	for (auto n: V) cout << n << " ";
}
