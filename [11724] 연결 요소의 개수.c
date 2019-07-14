/*[11724] ���� ����� ����*/
/*dfs�� ���Ӱ� ȣ��� Ƚ�� = ���� ����� ����*/
#include <stdio.h>
#define MAX 1001

int n, m; /*������ ����, ������ ����*/
int visit[MAX];
int matrix[MAX][MAX];

void dfs(int v);

int main(void)
{
	int u, v; /*������ �� ����*/
	int count = 0; /*���� dfs�� ȣ��� Ƚ��*/
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &u, &v);
		matrix[u][v] = 1;
		matrix[v][u] = 1;
	}
	for (int i = 1; i <= n; i++) /*���� 1���� ����*/
		if (!visit[i])
		{
			dfs(i);
			count++; /*dfs�� ���Ӱ� ȣ��� Ƚ�� = ���� ����� ����*/
		}
	printf("%d", count);
	return 0;
}

void dfs(int v)
{
	for (int i = 1; i <= n; i++)
		if (matrix[v][i] == 1 && !visit[i])
		{
			visit[i] = 1; /*�湮��*/
			dfs(i);
		}
}