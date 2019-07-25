#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 1001
/*https://www.acmicpc.net/problem/1260*/
using namespace std;

bool visit[MAX];
vector<int>list[MAX];
void dfs(int start);
void bfs(int start);

int main(void)
 {
	int N, M, V;
	cin >> N >> M >> V;
	for (int i = 1; i <= M; i++)
	{
		int u, v; /*������ �� �� ��*/
		cin >> u >> v;
		list[u].push_back(v);
		list[v].push_back(u);
	}
	for(int i=1;i<=N;i++)
		sort(list[i].begin(), list[i].end());
	dfs(V);
	for (int i = 1; i <= N; i++)
		visit[i] = false;
	cout << endl;
	bfs(V);
}

void dfs(int start)
{
	visit[start] = true; /*���� ��� �湮 ǥ��*/
	cout << start << " "; /*���*/
	for (int i = 0; i < list[start].size(); i++)
	{
		/*���� ��忡�� �̵��� �� �ִ� ���� ��� ã��*/
		int next = list[start][i];
		if (visit[next] == false) /* ���� ��尡 ���� �湮�� �� ���� �����*/
			dfs(next); /*���� ���� �̵�*/
	}
}

void bfs(int start)
{
	queue<int>q;
	visit[start] = true; /*�湮*/
	q.push(start); /*ť�� ���۳�� push*/
	while (!q.empty()) /*ť�� �� ������ �ݺ�*/
	{
		int now = q.front(); /*now = ť�� ���� �� ����*/
		q.pop();
		cout << now << " "; /*pop�� �� �湮�ߴ�, ���*/
		for (int i = 0; i < list[now].size(); i++)
		{
			/*���� ��忡�� �̵��� �� �ִ� ���� ���(next) ã��*/
			int next = list[now][i]; /*next�� ���ʷ� 2, 5, 6*/
			while (visit[next] == false) /*���� ���(next)�� ���� �湮�� �� ���� �����*/
			{
				visit[next] = true; /*next�� �湮�ߴٰ� ǥ��*/
				q.push(next);
			}
		}
	}
}