#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

queue<tuple<int, int, int>> J;
queue<tuple<int, int, int>> F;
char board[1000][1000];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int R, C;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> R >> C;
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> board[i][j];
			if (board[i][j] == 'J') J.push({i, j, 1});
			if (board[i][j] == 'F') F.push({i, j, 1});
		}
	}

	while (1) {
		// cout << "\n";
		// for (int i = 0; i < R; i++) {
		// 	for (int j = 0; j < C; j++) {
		// 		cout << board[i][j] << " ";
		// 	}
		// 	cout << "\n";
		// }

		tuple<int, int, int> ji;
		tuple<int, int, int> fi;
		ji = J.front(); J.pop();
		if (!F.empty()) {
			while (get<2>(F.front()) == get<2>(ji)) {
				fi = F.front(); F.pop();
				for (int i = 0; i < 4; i++) {
					int fx = get<0>(fi) + dx[i];
					int fy = get<1>(fi) + dy[i];
					if (fx < 0 || R <= fx || fy < 0 || C <= fy)
						continue;
					if (strchr("#F", board[fx][fy])) continue;
					F.push({fx, fy, get<2>(fi) + 1});
					board[fx][fy] = 'F';
				}
			}
		}
		for (int i = 0; i < 4; i++) {
			int jx = get<0>(ji) + dx[i];
			int jy = get<1>(ji) + dy[i];
			if (jx < 0 || R <= jx || jy < 0 || C <= jy) {
				cout << get<2>(ji);
				return 0;
			}
			if (strchr("#FJ", board[jx][jy])) continue;
			J.push({jx, jy, get<2>(ji) + 1});
			board[jx][jy] = 'J';
		}
		//갈곳이 없다면 지훈이는 타 죽었다..
		if (J.empty()) {
			cout << "IMPOSSIBLE";
			return 0;
		}
	}
}
