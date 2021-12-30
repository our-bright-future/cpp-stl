#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, K;
	cin >> N >> K;
	list<int> L;
	for (int i = 1; i <= N; i++) L.push_back(i);
	auto it = L.begin();
	cout << "<";
	while (L.size() > 1) {
		for (int i = 1; i < K; i++) {
			it++;
			if (it == L.end()) it = L.begin();
		}
		cout << *it << ", ";
		it = L.erase(it);
		if (it == L.end()) it = L.begin();
	}
	cout << *L.begin() << ">";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, K;
	cin >> N >> K;
	queue<int> Q;
	for (int i = 1; i <= N; i++) Q.push(i);
	cout << "<";
	while (!Q.empty()) {
		for (int i = 0; i < K - 1; i++) {
			Q.push(Q.front());
			Q.pop();
		}
		cout << Q.front();
		Q.pop();
		if (!Q.empty()) cout << ", ";
	}
	cout << ">";
}
