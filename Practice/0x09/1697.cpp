#include <bits/stdc++.h>
using namespace std;

queue<int> Q;
int arr[100001];
int N, K;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> K;
	fill(arr, arr + 100001, -1);
	arr[N] = 0;
	Q.push(N);
	while (arr[K] == -1) {
		int cur = Q.front(); Q.pop();
		for (int nxt : {cur - 1, cur + 1, 2 * cur}) {
			if (nxt < 0 || 100000 < nxt) continue;
			if (arr[nxt] != -1) continue;
			arr[nxt] = arr[cur] + 1;
			Q.push(nxt);
		}
	}
	cout << arr[K];
}
