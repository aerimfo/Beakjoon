/*https://www.acmicpc.net/problem/11403 */

/*[11403] ��� ã��*/
#include <stdio.h>
#define MAX 101

int n; /*������ ����*/
int matrix[MAX][MAX];
int visit[MAX];

void dfs(int v);

int main(void)
{
	scanf("%d", &n);

	/*������� �Է�, ���� 1������ ����*/
	for (int i = 1; i <= n; i++) /*��*/
	{
		for (int j = 1; j <= n; j++) /*��*/
			scanf("%d", &matrix[i][j]);
	}
	for (int i = 1; i <= n; i++)
	{
		for (int i = 1; i <= n; i++) /*�ʱ�ȭ*/
			visit[i] = 0; /*�湮����*/
		dfs(i);
		for (int i = 1; i <= n; i++) /*������� ���*/
		{
			if (visit[i]) /*�湮�ߴٸ�*/
				printf("%d ", visit[i]);
			else /*�湮���� �ʾҴٸ�*/
				printf("%d ", visit[i]);
		}
		printf("\n");
	}
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