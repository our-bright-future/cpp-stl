#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int score;
	cin >> score;
	if (score > 89) cout << "A";
	else if (score > 79) cout << "B";
	else if (score > 69) cout << "C";
	else if (score > 59) cout << "D";
	else cout << "F";
}
