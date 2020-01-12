// [10451] ���� ����Ŭ
// https://www.acmicpc.net/problem/10451
// dfs, bfs
/* ***������ ũ��� �ִ� 1000�̰� �׷����� index�� 1���� �����ϱ� ������ 
   �迭�� ũ��� �ּ� 1001�� ��ƾ� ��*** */

#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

void bfs(int s);
bool check[1001];
vector<int> a[1001];
int n, cnt;
queue<int> q;

int main(void)
{
	int t, v;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;

		// initialization
		memset(check, false, sizeof(check));
		while (!q.empty())
			q.pop();

		for (int j = 1; j <= n; j++) {
			a[j].clear(); // initialization
			cin >> v;
			a[j].push_back(v);
		}
		for (int i = 1; i <= n; i++) {
			if (check[i] == false) {
				bfs(i);
			}
		}
		cout << cnt << endl;
		cnt = 0;
	}
	return 0;
}

void bfs(int s)
{
	check[s] = true; q.push(s);
	while (!q.empty()) {
		int x = q.front(); q.pop();
		for (int i = 0; i < a[x].size(); i++) {
			int next = a[x][i];
			if (check[next] == false) {
				check[next] = true; q.push(next);
			}
		}
	}
	cnt++;
}