/*https://www.acmicpc.net/problem/1158 */

/* [1158] �����۽� ���� */
/* �迭 �ʱ�ȭ���� for�� ����ϸ� �ð� �ʰ� */

#include <stdio.h>
#define MAX 5001

void joseph_f();

int main()
{
	joseph_f();
}
void joseph_f()
{
	int n, k;
	scanf("%d %d", &n, &k);
	int j = 1;
	int joseph[MAX] = { 0, }; // �迭 ��ü 0���� �ʱ�ȭ
	int time;

	printf("<");
	for (int i = 0; i < n; i++)
	{
		time = 0;
		while (1)
		{
			if (joseph[j] == 0) //���� 0�� �������� 1, 2, 3....
				time++;
			if (time == k)
			{
				joseph[j] = 1;
				if (i == n - 1) // �� ����� ���� ���
					printf("%d>", j);
				else // �� ��� �̻� ���� ���
					printf("%d, ", j);
				break;
			}
			j++;
			if (j > n)
				j = 1;
		}

	}
}