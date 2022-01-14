#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


}

빙판에 번호를 매기자
.일때 BFS돌리면서 X가 나오면 1을 마킹한다.
이후 X일때 BFS돌리면서 상하좌우 X가 0이아닌(마킹된) 녀석중에
가장 작은값 + 1로 나를 마킹한다.

백조의 영역만 연결되면 되니까 L을 복사해서 그 영역에 다 넣자

아스발어렵네 ㅋㅋ
