#include <bits/stdc++.h>
using namespace std;

int N;
string str[25];
int vis[25][25];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int BFS(int x, int y) {
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
			if (nx < 0 || N <= nx || ny < 0 || N <= ny) continue;
			if (vis[nx][ny] || str[nx][ny] == '0') continue;
			Q.push({nx, ny});
			vis[nx][ny] = 1;
		}
	}
	return (pop_cnt);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> str[i];

	vector<int> V;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (!vis[i][j] && str[i][j] == '1')
				V.push_back(BFS(i, j));
	sort(V.begin(), V.begin() + V.size());
	cout << V.size() << "\n";
	for (auto n: V) cout << n << "\n";
}
