/*[2775] �γ�ȸ���� ���׾�*/
#include <stdio.h>

int main(void)
{
	int t; /*testcase*/
	int f, r; /*��, ȣ*/
	int apt[15][15] = { 0, }; /*����Ʈ*/
	scanf_s("%d", &t);
	for (int j = 1; j <= 14; j++) /*0�� jȣ*/
		apt[0][j] = j;
	for (int i = 1; i <= 14; i++)
		for (int j = 1; j <= 14; j++)
			for (int k = 1; k <= j; k++)
				apt[i][j] += apt[i - 1][k];

	for (int i = 0; i < t; i++)
	{
		scanf_s("%d", &f);
		scanf_s("%d", &r);
		printf("%d\n", apt[f][r]);
	}
}
