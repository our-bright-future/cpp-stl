#include <bits/stdc++.h>
using namespace std;

char board[1000][1000];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;
	while (T--) {
		int w, h;
		cin >> w >> h;

		queue<tuple<int, int, int>> F, S;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> board[i][j];
				if (board[i][j] == '@') S.push({i, j, 1});
				if (board[i][j] == '*') F.push({i, j, 1});
			}
		}

		int end_code = 0;
		while (!end_code) {
			tuple<int, int, int> cur = S.front(); S.pop();
			while (!F.empty() && get<2>(F.front()) == get<2>(cur)) {
				tuple<int, int, int> fur = F.front(); F.pop();
				for (int i = 0; i < 4; i++) {
					int nx = get<0>(fur) + dx[i];
					int ny = get<1>(fur) + dy[i];
					if (nx < 0 || h <= nx || ny < 0 || w <= ny)
						continue;
					if (strchr("#*", board[nx][ny])) continue;
					F.push({nx, ny, get<2>(fur) + 1});
					board[nx][ny] = '*';
				}
			}
			for (int i = 0; i < 4; i++) {
				int nx = get<0>(cur) + dx[i];
				int ny = get<1>(cur) + dy[i];
				if (nx < 0 || h <= nx || ny < 0 || w <= ny) {
					cout << get<2>(cur) << '\n';
					end_code = 1;
					break;
				}
				if (strchr("#*@", board[nx][ny])) continue;
				S.push({nx, ny, get<2>(cur) + 1});
				board[nx][ny] = '@';
			}
			if (!end_code && S.empty()) {
				cout << "IMPOSSIBLE" << "\n";
				end_code = 1;
			}
		}
	}
}
